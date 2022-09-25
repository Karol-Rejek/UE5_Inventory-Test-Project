// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalMan.h"

#include "PlayerStatComponent.h"
#include "Actors/Item.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

// Sets default values
ASurvivalMan::ASurvivalMan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 450.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = true;

	bDead = false;
	bIsSprinting = false;

	PlayerStatComp = CreateDefaultSubobject<UPlayerStatComponent>("PlayerStatComponent");
}

// Called when the game starts or when spawned
void ASurvivalMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurvivalMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HandleSprinting();
}

// Called to bind functionality to input
void ASurvivalMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &ASurvivalMan::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &ASurvivalMan::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASurvivalMan::AttemptJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASurvivalMan::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASurvivalMan::StopSprinting);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASurvivalMan::Interact);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ASurvivalMan::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ASurvivalMan::MoveRight);
}

void ASurvivalMan::Interact()
{
	FVector Start = FollowCamera->GetComponentLocation();
	FVector End = Start + FollowCamera->GetForwardVector() * 500.0f;
	Interact(Start, End);
}

void ASurvivalMan::Interact(FVector Start, FVector End)
{

	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params))
	{
		if (IInteractableInterface* Interface = Cast<IInteractableInterface>(HitResult.GetActor()))
		{
			ServerInteract(Start, End);
		}
	}
}

bool ASurvivalMan::ServerInteract_Validate(FVector Start, FVector End)
{
	return true;
}

void ASurvivalMan::ServerInteract_Implementation(FVector Start, FVector End)
{
	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params))
	{
		if (IInteractableInterface* Interface = Cast<IInteractableInterface>(HitResult.GetActor()))
		{
			Interface->Use(this);
		}
	}
}

void ASurvivalMan::MoveForward(float Axis)
{
	if (!bDead)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRorarion(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRorarion).GetUnitAxis(EAxis::X);

		if (!bIsSprinting)
		{
			Axis *= 0.4f;
		}

		AddMovementInput(Direction, Axis);
	}
}

void ASurvivalMan::MoveRight(float Axis)
{
	if (!bDead)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRorarion(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRorarion).GetUnitAxis(EAxis::Y);

		if (!bIsSprinting)
		{
			Axis *= 0.4f;
		}

		AddMovementInput(Direction, Axis);
	}
}

void ASurvivalMan::StartSprinting()
{
	if (PlayerStatComp->GetStamina() > 10.0f)
	{
		bIsSprinting = true;
		PlayerStatComp->ControlSprintingTimer(true);
	}
	else if (PlayerStatComp->GetStamina() <= 0.0f)
	{
		PlayerStatComp->ControlSprintingTimer(false);
	}
}

void ASurvivalMan::StopSprinting()
{
	bIsSprinting = false;
	PlayerStatComp->ControlSprintingTimer(false);
}

void ASurvivalMan::HandleSprinting()
{
	if (bIsSprinting && this->GetVelocity().Size())
	{
		PlayerStatComp->LowerStamina(2.0f);
		if (PlayerStatComp->GetStamina() <= 0.0f)
		{
			StopSprinting();
		}
	}
}

void ASurvivalMan::AttemptJump()
{
	if (PlayerStatComp->GetStamina() > 10.0f && !GetCharacterMovement()->IsFalling())
	{
		Jump();
		PlayerStatComp->LowerStamina(10.0f);
	}
}

float ASurvivalMan::ReturnStats(int index)
{
	switch (index)
	{
	case 1:
		return PlayerStatComp->GetHunger();
		break;
	case 2:
		return PlayerStatComp->GetThirst();
		break;
	case 3:
		return PlayerStatComp->GetStamina();
		break;
	case 4:
		return PlayerStatComp->GetHealth();
		break;
	case 5:
		return PlayerStatComp->GetMaxHealth();
		break;
	default:
		return 0.0f;
		break;
	}
}