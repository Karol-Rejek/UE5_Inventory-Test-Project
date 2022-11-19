// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/PickUpItems/EdibleItems.h"
#include "ArrasisSurvival/SurvivalMan.h"
#include "ArrasisSurvival/PlayerStatComponent.h"

AEdibleItems::AEdibleItems()
{
}

void AEdibleItems::Use(ASurvivalMan* Character)
{
	if (Character)
	{
		switch (PickupType)
		{
		case EPikupType::EFoodCan:
			Character->PlayerStatComp->AddHunger(10.0f);
			break;
		case EPikupType::EWaterBottle:
			Character->PlayerStatComp->AddThirst(10.0f);
			break;
		case EPikupType::EHealth:
			Character->PlayerStatComp->AddHelath(50.0f);
			break;
		default:
			break;
		}
		Destroy();
	}
}