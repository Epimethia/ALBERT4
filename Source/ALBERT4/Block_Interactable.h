// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block_Walkable.h"
#include "Block_Interactable.generated.h"

/**
 * 
 */
UCLASS()
class ALBERT4_API ABlock_Interactable : public ABlock_Walkable
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABlock_Interactable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
};
