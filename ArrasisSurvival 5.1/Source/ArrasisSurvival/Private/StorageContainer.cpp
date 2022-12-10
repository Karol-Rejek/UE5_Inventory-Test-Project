// Fill out your copyright notice in the Description page of Project Settings.


#include "StorageContainer.h"
#include "ArrasisSurvival/Public/InventoryComponent.h"

#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AStorageContainer::AStorageContainer()
{
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");
	Inventory = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");

	bReplicates = true;
	IsOpen = false;
}

// Called when the game starts or when spawned
void AStorageContainer::BeginPlay()
{
	Super::BeginPlay();

}

void AStorageContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// REplicate to everyone
	DOREPLIFETIME(AStorageContainer, IsOpen);
}

void AStorageContainer::OnRep_CheckIsOpened()
{
	if (IsOpen)
	{
		MeshComp->PlayAnimation(OpenAnimation, false);
	}
	else
	{
		MeshComp->PlayAnimation(CloseAnimation, false);
	}
}

void AStorageContainer::OpenedChest(bool Opened)
{
	Server_OpenedChest(Opened);
}

bool AStorageContainer::Server_OpenedChest_Validate(bool Opened)
{
	return true;
}

void AStorageContainer::Server_OpenedChest_Implementation(bool Opened)
{
	if (HasAuthority())
	{
		IsOpen = Opened;
	}
}

