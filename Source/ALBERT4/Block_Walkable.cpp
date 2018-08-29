// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Walkable.h"


// Sets default values
ABlock_Walkable::ABlock_Walkable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
	Walkable = true;
}

// Called when the game starts or when spawned
void ABlock_Walkable::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlock_Walkable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
