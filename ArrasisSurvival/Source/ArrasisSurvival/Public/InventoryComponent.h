// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArrasisSurvival/SurvivalMan.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARRASISSURVIVAL_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Inventory")
		TArray<AActor*> Items;

	int32 InventoryCapacity;

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_DropItem(class AActor* Item);
	bool Server_DropItem_Validate(class AActor* Item);
	void Server_DropItem_Implementation(class AActor* Item);

	bool ChechIfClientHasItem(class AActor* Item);
	bool RemoveItemFromInventory(class AActor* Item);

public:	
		

	void AddItem(AActor* Item);
		
	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		void DropItem(AActor* Item);

	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		TArray<class AActor*> GetInventoryItems() { return Items; }

	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		int32 GetCurrentInventoryCount() { return Items.Num() - 1; }

	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		int32 GetInventoryCapacity() { return InventoryCapacity - 1; }
};
