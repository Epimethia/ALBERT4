// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBlock.h"
#include "Block_NotWalkable.generated.h"

/**
*
*/
UCLASS()
class ALBERT4_API ABlock_NotWalkable : public ABaseBlock
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABlock_NotWalkable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
