// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include "BaseBlock.generated.h"

UCLASS()
class ALBERT4_API ABaseBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BlockMesh;	

	UPROPERTY(BlueprintReadOnly)
	bool Walkable;

	UPROPERTY(EditAnywhere)
	AActor* PlayerCharacter;
};
