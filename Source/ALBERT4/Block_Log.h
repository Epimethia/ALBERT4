// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Block_Interactable.h"
#include "Block_Log.generated.h"

/**
 * 
 */
UCLASS()
class ALBERT4_API ABlock_Log : public ABlock_Interactable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABlock_Log();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	TArray<AActor*> OverlappingActors;
	UBoxComponent* BoxCollider = nullptr;
	
};
