// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Blueprint/UserWidget.h"

#include "SurvivalMan.generated.h"

UCLASS()
class ARRASISSURVIVAL_API ASurvivalMan : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalMan();
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	class UInventoryComponent* InventoryComp;

	TSubclassOf<class UUserWidget> InventoryWidgetClass;
	class UUserWidget* InventoryWidget;

	class AStorageContainer* OpenedContainer;

private:
	void MoveForward(float Axis);
	void MoveRight(float Axis);

	void StartSprinting();
	void StopSprinting();
	void HandleSprinting();
	
	void AttemptJump();

	void OpenCloseInventory();

protected:
	void Interact();
	void Interact(FVector Start, FVector End);

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerInteract(FVector Start, FVector End);
	bool ServerInteract_Validate(FVector Start, FVector End);
	void ServerInteract_Implementation(FVector Start, FVector End);

	bool bDead;
	bool bIsSprinting;

	UFUNCTION(BlueprintPure)
		float ReturnStats(int index);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		class UInventoryComponent* GetInventoryComp() { return InventoryComp; }

	UFUNCTION(BlueprintCallable)
		class AStorageContainer* GetOpenedContainer() { return OpenedContainer; }

public:
	class UPlayerStatComponent* PlayerStatComp;
	class ULineTrace* LineTraceComp;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AddInventoryItem(AActor* Item);
};
