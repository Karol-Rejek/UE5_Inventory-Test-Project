// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStatComponent.h"
#include <Net/UnrealNetwork.h>
#include "TimerManager.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UPlayerStatComponent::UPlayerStatComponent()
{
	Hunger = 100.0f;
	HungerDecrementValue = 0.3f;
	Thirst = 100.0f;
	ThirstDecrementValue = 0.5f;
	Max_Health = 30.0f;
	Health = Max_Health;

	Stamina = 100.0f;
}


// Called when the game starts
void UPlayerStatComponent::BeginPlay()
{
	Super::BeginPlay();
	SetIsReplicated(true);

	if (GetOwnerRole() == ROLE_Authority)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UPlayerStatComponent::HungerAndThirstHandle, 3.0f, true);
		GetWorld()->GetTimerManager().SetTimer(StaminaHandle, this, &UPlayerStatComponent::RegenerateStamina, 1.0f, true);
	}
}

void UPlayerStatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// REplicate to everyone
	DOREPLIFETIME(UPlayerStatComponent, Hunger);
	DOREPLIFETIME(UPlayerStatComponent, Thirst);
	DOREPLIFETIME(UPlayerStatComponent, Health);
	DOREPLIFETIME(UPlayerStatComponent, Stamina);
}

void UPlayerStatComponent::HungerAndThirstHandle()
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		LowerHunger(HungerDecrementValue);
		LowerThirst(ThirstDecrementValue);
	}
}

void UPlayerStatComponent::LowerHunger(float Value)
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerLowerHunger(Value);
	}
	else if (GetOwnerRole() == ROLE_Authority)
	{
		Hunger -= Value;
	}
}

bool UPlayerStatComponent::ServerLowerHunger_Validate(float Value)
{
	return true;
}

void UPlayerStatComponent::ServerLowerHunger_Implementation(float Value)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		LowerHunger(Value);
	}
}

void UPlayerStatComponent::LowerThirst(float Value)
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerLowerThirst(Value);
	}
	else if (GetOwnerRole() == ROLE_Authority)
	{
		Thirst -= Value;
	}
}

bool UPlayerStatComponent::ServerLowerThirst_Validate(float Value)
{
	return true;
}

void UPlayerStatComponent::ServerLowerThirst_Implementation(float Value)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		LowerThirst(Value);
	}
}

void UPlayerStatComponent::RegenerateStamina()
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (Stamina >= 100.0f)
		{
			Stamina = 100.0f;
		}
		else
		{
			++Stamina;
		}
	}
}

void UPlayerStatComponent::LowerStamina(float Value)
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerLowerStamina(Value);
	}
	else if (GetOwnerRole() == ROLE_Authority)
	{
		if (Stamina < 0.0f)
		{
			Stamina = 0.0f;
		}
		else
		{
			Stamina -= Value;
		}
	}
}

bool UPlayerStatComponent::ServerLowerStamina_Validate(float Value)
{
	return true;
}

void UPlayerStatComponent::ServerLowerStamina_Implementation(float Value)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		LowerStamina(Value);
	}
}

void UPlayerStatComponent::ControlSprintingTimer(bool IsSprinting)
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerControlSprintingTimer(IsSprinting);
		return;
	}
	else if (GetOwnerRole() == ROLE_Authority)
	{
		if (IsSprinting)
		{
			GetWorld()->GetTimerManager().PauseTimer(StaminaHandle);
		}
		else
		{
			GetWorld()->GetTimerManager().UnPauseTimer(StaminaHandle);
		}
	}
}

bool UPlayerStatComponent::ServerControlSprintingTimer_Validate(bool IsSprinting)
{
	return true;
}

void UPlayerStatComponent::ServerControlSprintingTimer_Implementation(bool IsSprinting)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		ControlSprintingTimer(IsSprinting);
	}
}

void UPlayerStatComponent::AddHunger(float Value)
{
	if ((Hunger + Value) >= 100.0f)
	{
		Hunger = 100.0f;
	}
	else
	{
		Hunger += Value;
	}
}

void UPlayerStatComponent::AddHelath(float Value)
{
	if ((Health + Value) >= Max_Health)
	{
		Health = Max_Health;
	}
	else
	{
		Health += Value;
	}
}

void UPlayerStatComponent::AddThirst(float Value)
{
	if ((Thirst + Value) >= 100.0f)
	{
		Thirst = 100.0f;
	}
	else
	{
		Thirst += Value;
	}
}