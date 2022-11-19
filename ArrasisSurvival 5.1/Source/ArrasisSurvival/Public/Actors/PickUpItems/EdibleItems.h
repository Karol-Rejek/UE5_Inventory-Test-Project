// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/PickupItems.h"
#include "EdibleItems.generated.h"

UENUM(BlueprintType)
enum class EPikupType :uint8
{
	EFoodCan UMETA(DisplayName = "FoodCan"),
	EWaterBottle UMETA(DisplayName = "WaterBottle"),
	EHealth UMETA(DisplayName = "Medpack")
};

UCLASS()
class ARRASISSURVIVAL_API AEdibleItems : public APickupItems
{
	GENERATED_BODY()
	
public:
	AEdibleItems();

protected:

	UPROPERTY(EditAnywhere, Category = "Enums")
		EPikupType PickupType;
public:
	virtual void Use(ASurvivalMan* Character) override;
};
