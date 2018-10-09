// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block_Interactable.h"
#include "Block_Boulder.generated.h"

/**
 * 
 */
UCLASS()
class ALBERT4_API ABlock_Boulder : public ABlock_Interactable
{
	GENERATED_BODY()

	ABlock_Boulder();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable) void Activate();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere) bool m_bRolling;

private:
	FVector Dir;
	bool m_bFalling;
	bool m_bIsActive;
};
