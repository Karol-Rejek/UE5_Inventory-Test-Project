// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Item.h"
#include "PickupItems.generated.h"

/**
 * 
 */
UCLASS()
class ARRASISSURVIVAL_API APickupItems : public AItem
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APickupItems();

protected:
	UPROPERTY(ReplicatedUsing = OnRep_PickedUp)
		bool ObjectPickedUp;

	UFUNCTION()
		void OnRep_PickedUp();

protected:
	virtual void BeginPlay() override;

public:
	void InInventory(bool In);

	virtual void Interact(ASurvivalMan* Character) override;
	virtual void Use(ASurvivalMan* Character) override;
	virtual void Drop() override;
};
