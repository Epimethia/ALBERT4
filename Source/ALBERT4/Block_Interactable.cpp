// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Interactable.h"


// Sets default values
ABlock_Interactable::ABlock_Interactable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	

}

// Called when the game starts or when spawned
void ABlock_Interactable::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlock_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}