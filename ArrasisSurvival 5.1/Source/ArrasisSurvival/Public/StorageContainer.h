// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StorageContainer.generated.h"

UCLASS()
class ARRASISSURVIVAL_API AStorageContainer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStorageContainer();
protected:
	UPROPERTY(EditAnywhere)
		class USkeletalMeshComponent* MashComp;

	UPROPERTY(EditAnywhere)
		class UInventoryComponent* Inventory;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable)
		class UInventoryComponent* GetInventoryComponent() { return Inventory; }

};
