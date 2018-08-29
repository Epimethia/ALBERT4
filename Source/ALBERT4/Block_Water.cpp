// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Water.h"
#include "Block_Interactable.h"

// Sets default values
ABlock_Water::ABlock_Water()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
	// Set water blocks collision profile to overlap all
	BlockMesh->SetCollisionProfileName(FName("OverlapAll"));

	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Water_Block/Water_Block_Mesh.Water_Block_Mesh'")).Object);
}

// Called when the game starts or when spawned
void ABlock_Water::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlock_Water::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// If static mesh is not Log+Water mesh
	GetOverlappingActors(OverlappingActors, TSubclassOf<ABlock_Interactable>());

	// Check if log overlaps with water block 
	if (OverlappingActors.Num() > 0)
	{

	}

	// if it does, set the mesh to Log+Water mesh and set the block to walkable 

}


