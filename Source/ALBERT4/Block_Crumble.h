// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block_Walkable.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"
#include "DestructibleActor.h"
#include "DestructibleComponent.h"
#include "Block_Crumble.generated.h"

/**
 * 
 */
UCLASS()
class ALBERT4_API ABlock_Crumble : public ABlock_Walkable
{
	GENERATED_BODY()
	
public:
	ABlock_Crumble();
	
	UFUNCTION(BlueprintCallable)
	void Crumble();
	void Fall();

	UFUNCTION(BlueprintCallable)
	void OnOverlapBegin(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION(BlueprintCallable)
	void OnOverlapEnd(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* Audio;
private:
	FTimerHandle FallTimer;
	UBoxComponent* Trigger;
	UDestructibleComponent* CrumbleMesh;
};
