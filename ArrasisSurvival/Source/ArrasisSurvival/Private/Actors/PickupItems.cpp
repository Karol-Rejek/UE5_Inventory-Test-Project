// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/PickupItems.h"
#include "Net/UnrealNetwork.h"

APickupItems::APickupItems()
{
	bReplicates = true;
	ObjectPickedUp = false;
}

void APickupItems::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		SetReplicates(true);
	}
}

void APickupItems::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// REplicate to everyone
	DOREPLIFETIME(APickupItems, ObjectPickedUp);
}

void APickupItems::OnRep_PickedUp()
{
	this->MeshComp->SetHiddenInGame(ObjectPickedUp);
	if (ObjectPickedUp)
	{
		this->MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	else
	{
		this->MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void APickupItems::InInventory(bool In)
{
	if (HasAuthority())
	{
		ObjectPickedUp = In;
		OnRep_PickedUp();
	}
}

void APickupItems::Interact(ASurvivalMan* Character)
{
	if (Character)
	{
		InInventory(true);
	}
}

void APickupItems::Use(ASurvivalMan* Character)
{
	UE_LOG(LogTemp, Warning, TEXT("USING ITEM: %s"), *GetName());
}

void APickupItems::Drop()
{
	InInventory(false);
}

