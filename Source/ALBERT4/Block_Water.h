// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block_NotWalkable.h"
#include "Block_Water.generated.h"

/**
 * 
 */
UCLASS()
class ALBERT4_API ABlock_Water : public ABlock_NotWalkable
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABlock_Water();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	TArray<AActor*> OverlappingActors;
	UStaticMesh* LogWaterMesh;
	bool LogWater; // Bool containing if the water block has had its mesh changed into a waterlog mesh
	
	
};
