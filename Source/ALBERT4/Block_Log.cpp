// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Log.h"

// Sets default values
ABlock_Log::ABlock_Log()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlock_Log::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlock_Log::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PlayerCharacter->IsOverlappingActor(this))
	{
		// Move the log to the next tile
	}
	
	
}

