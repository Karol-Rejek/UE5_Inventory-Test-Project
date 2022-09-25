// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArrasisSurvival/Public/InteractableInterface.h"
#include "Item.generated.h"


UCLASS()
class ARRASISSURVIVAL_API AItem : public AActor , public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
		class UTexture2D* Icon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Interact(ASurvivalMan* Character) override;
	virtual void Use(ASurvivalMan* Character) override;

	UFUNCTION(BlueprintCallable)
		class UTexture2D* GetItemIcon() { return Icon; }
};
