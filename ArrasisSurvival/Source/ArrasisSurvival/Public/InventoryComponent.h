// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
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

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		TArray<AActor*> Items;

public:	
	void AddItem(AActor* Item);
		

	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		void DropItem(AActor* Item);

	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		TArray<class AActor*> GetInventoryItems() { return Items; }

	UFUNCTION(BlueprintCallable, Category = "ArrasisInventory|Inventory")
		int32 GetCurrentInventoryCount() { return Items.Num() - 1; }
};
