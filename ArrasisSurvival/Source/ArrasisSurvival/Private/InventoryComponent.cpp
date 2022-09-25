// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "InteractableInterface.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UInventoryComponent::AddItem(AActor* Item)
{
	if (Item)
	{
		UE_LOG(LogTemp, Warning, TEXT("Picked Up Item: %s"), *Item->GetName());
		Items.Add(Item);
	}
}

void UInventoryComponent::DropItem(AActor* Item)
{
	if (int FoundIndex = Items.Find(Item))
	{
		if (IInteractableInterface* Interface = Cast<IInteractableInterface>(Item))
		{
			UE_LOG(LogTemp, Warning, TEXT("Dropping Item: %s"), *Item->GetName());
			Interface->Drop();
			Items.RemoveAt(FoundIndex);
		}
	}

}
