// Fill out your copyright notice in the Description page of Project Settings.


#include "StorageContainer.h"
#include "ArrasisSurvival/Public/InventoryComponent.h"

#include "Components/SkeletalMeshComponent.h"

// Sets default values
AStorageContainer::AStorageContainer()
{
	MashComp = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");
	Inventory = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");

	bReplicates = true;
}

// Called when the game starts or when spawned
void AStorageContainer::BeginPlay()
{
	Super::BeginPlay();
	
}

