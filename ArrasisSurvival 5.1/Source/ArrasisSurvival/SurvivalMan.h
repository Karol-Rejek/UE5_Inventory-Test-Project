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

	UPROPERTY(ReplicatedUsing = OnRep_OpenCloseContainer)
		class AStorageContainer* OpenedContainer;

private:
	void MoveForward(float Axis);
	void MoveRight(float Axis);

	void StartSprinting();
	void StopSprinting();
	void HandleSprinting();
	
	void AttemptJump();

	UFUNCTION()
		void OnRep_OpenCloseContainer();

	void OpenCloseInventory();

protected:
	void Interact();
	void Interact(FVector Start, FVector End);
	
	UFUNCTION(Server, Reliable, WithValidation)
		void Server_Interact(FVector Start, FVector End);
	bool Server_Interact_Validate(FVector Start, FVector End);
	void Server_Interact_Implementation(FVector Start, FVector End);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_CloseInventory();
	bool Server_CloseInventory_Validate();
	void Server_CloseInventory_Implementation();

	bool bDead;
	bool bIsSprinting;

	UFUNCTION(BlueprintPure)
		float ReturnStats(int index);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		class AStorageContainer* GetOpenedContainer() { return OpenedContainer; }

public:
	UFUNCTION(BlueprintCallable)
		class UInventoryComponent* GetInventoryComponent() { return InventoryComp; }
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
