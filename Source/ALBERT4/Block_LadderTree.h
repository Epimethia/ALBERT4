// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block_Interactable.h"
#include "Block_LadderTree.generated.h"

/**
 * 
 */
UCLASS()
class ALBERT4_API ABlock_LadderTree : public ABlock_Interactable
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABlock_LadderTree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	TArray<AActor*> OverlappingActors;


	
	
};
