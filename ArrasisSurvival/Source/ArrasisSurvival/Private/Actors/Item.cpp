// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Item.h"

// Sets default values
AItem::AItem()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = MeshComp;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::Interact(ASurvivalMan* Character)
{
}

void AItem::Use(ASurvivalMan* Character)
{
}
