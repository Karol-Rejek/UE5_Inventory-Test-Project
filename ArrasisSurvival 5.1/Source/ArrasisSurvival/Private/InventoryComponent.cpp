// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "InteractableInterface.h"
#include "Actors/Item.h"
#include "StorageContainer.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	InventoryCapacity = 36;
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	SetIsReplicated(true);
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// REplicate to everyone
	DOREPLIFETIME(UInventoryComponent, Items);
}

void UInventoryComponent::AddItem(AActor* Item)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (Item)
		{
			UE_LOG(LogTemp, Warning, TEXT("Picked Up Item: %s"), *Item->GetName());
			Items.Add(Item);
		}
	}
}

void UInventoryComponent::TransferItem(AStorageContainer* Container, AActor* Item)
{
	Server_TransferItem(Container, Item);
}

bool UInventoryComponent::Server_TransferItem_Validate(AStorageContainer* Container, AActor* Item)
{
	return ChechIfClientHasItem(Item);
}

void UInventoryComponent::Server_TransferItem_Implementation(AStorageContainer* Container, AActor* Item)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (Container)
		{
			if (UInventoryComponent* CInventory = Container->GetInventoryComponent())
			{
				CInventory->AddItem(Item);
				RemoveItemFromInventory(Item);
			}
		}
	}
}

bool UInventoryComponent::ChechIfClientHasItem(AActor* Item)
{
	for (AActor* Pickup : Items)
	{
		if (Pickup == Item)
		{
			return true;
		}
	}
	return false;
}

bool UInventoryComponent::RemoveItemFromInventory(AActor* Item)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		int FoundIndex = Items.Find(Item);
		if (FoundIndex != INDEX_NONE)
		{
			if (IInteractableInterface* Interface = Cast<IInteractableInterface>(Item))
			{
				UE_LOG(LogTemp, Warning, TEXT("Dropping Item: %s"), *Item->GetName());
				Interface->Drop();
				Items.RemoveAt(FoundIndex);
				return true;
			}
		}
	}
	return false;
}

bool UInventoryComponent::Server_DropItem_Validate(AActor* Item)
{
	return ChechIfClientHasItem(Item);
}

void UInventoryComponent::Server_DropItem_Implementation(AActor* Item)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		FVector Location = GetOwner()->GetActorLocation();
		Location.X += FMath::RandRange(-50.0f, 100.0f);
		Location.Y += FMath::RandRange(-50.0f, 100.0f);
		FVector EndRay = Location;
		EndRay.Z -= 500.0f;

		FHitResult HitResult;
		FCollisionObjectQueryParams ObjQuery;
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(GetOwner());

		GetWorld()->LineTraceSingleByObjectType(OUT HitResult, Location, EndRay, ObjQuery, CollisionParams);

		if (HitResult.ImpactPoint != FVector::ZeroVector)
		{
			Location = HitResult.ImpactPoint;
		}
		Item->SetActorLocation(Location);
		RemoveItemFromInventory(Item);
	}
}

void UInventoryComponent::DropItem(AActor* Item)
{
	Server_DropItem(Item);
}

bool UInventoryComponent::Server_UseItem_Validate(AItem* Item)
{
	return ChechIfClientHasItem(Item);
}

void UInventoryComponent::Server_UseItem_Implementation(AItem* Item)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (ASurvivalMan* Player = Cast<ASurvivalMan>(GetOwner()))
		{
			Item->Use(Player);
			RemoveItemFromInventory(Item);
		}
	}
}

void UInventoryComponent::UseItem(AItem* Item)
{
	Server_UseItem(Item);
}
