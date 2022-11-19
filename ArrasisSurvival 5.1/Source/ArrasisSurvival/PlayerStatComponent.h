// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerStatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARRASISSURVIVAL_API UPlayerStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerStatComponent();

protected:
	UPROPERTY(Replicated)
		float Hunger;

	UPROPERTY(EditAnywhere, Category = "S|PlayerStats")
		float HungerDecrementValue;

	UPROPERTY(Replicated)
		float Thirst;

	UPROPERTY(EditAnywhere, Category = "S|PlayerStats")
		float ThirstDecrementValue;

	UPROPERTY(Replicated)
		float Health;

	float Max_Health;

	UPROPERTY(Replicated)
		float Stamina;

	FTimerHandle TimerHandle;
	FTimerHandle StaminaHandle;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void HungerAndThirstHandle();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerLowerHunger(float Value);
	bool ServerLowerHunger_Validate(float Value);
	void ServerLowerHunger_Implementation(float Value);

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerLowerThirst(float Value);
	bool ServerLowerThirst_Validate(float Value);
	void ServerLowerThirst_Implementation(float Value);

	void RegenerateStamina();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerLowerStamina(float Value);
	bool ServerLowerStamina_Validate(float Value);
	void ServerLowerStamina_Implementation(float Value);

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerControlSprintingTimer(bool IsSprinting);
	bool ServerControlSprintingTimer_Validate(bool IsSprinting);
	void ServerControlSprintingTimer_Implementation(bool IsSprinting);

public:	
	
	void AddHunger(float Value);
	void AddHelath(float Value);
	void AddThirst(float Value);

	void LowerHunger(float Value);
	void LowerThirst(float Value);
	void LowerStamina(float Value);

	float GetHunger() { return Hunger; }
	float GetThirst() { return Thirst; }
	float GetHealth() { return Health; }
	float GetMaxHealth() { return Max_Health; }
	float GetStamina() { return Stamina; }

	void ControlSprintingTimer(bool IsSprinting);
		
};
