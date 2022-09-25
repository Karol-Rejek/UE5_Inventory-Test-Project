// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/PickupItems.h"
#include "Net/UnrealNetwork.h"

APickupItems::APickupItems()
{


}

void APickupItems::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		SetReplicates(true);
	}
}

void APickupItems::Interact(ASurvivalMan* Character)
{
}

void APickupItems::Use(ASurvivalMan* Character)
{
	UE_LOG(LogTemp, Warning, TEXT("USING ITEM: %s"), *GetName());
}

