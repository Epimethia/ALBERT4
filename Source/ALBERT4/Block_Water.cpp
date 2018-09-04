// Fill out your copyright notice in the Description page of Project Settings.
#include "Block_Water.h"
#include "Block_Interactable.h"
#include "Block_Log.h"

// Sets default values
ABlock_Water::ABlock_Water()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
	// Set water blocks collision profile to overlap all
	BlockMesh->SetCollisionProfileName(FName("OverlapAll"));

	// Set mesh variables for use later
	LogWaterMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Water_Block/WaterLog_Block_Mesh.WaterLog_Block_Mesh'")).Object;
	WaterMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Water_Block/Water_Block_Mesh.Water_Block_Mesh'")).Object;
	BlockMesh->SetStaticMesh(WaterMesh);
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
	if (BlockMesh->GetStaticMesh() != LogWaterMesh)
	{
		// Get actors overlapping this one that are of class ABlock_Log
		GetOverlappingActors(OverlappingActors, ABlock_Log::StaticClass());
		//UE_LOG(LogTemp, Warning, TEXT("%i"), OverlappingActors.Num());

		// Check if log overlaps with water block 
		if (OverlappingActors.Num() > 0)
		{		
			// check that the log is above the water
			if (OverlappingActors[0]->GetActorLocation() == this->GetActorLocation() + FVector(0.0f, 0.0f, 100.0f))
			{
				// Attempt to destroy the log
				OverlappingActors[0]->Destroy();
				//OverlappingActors.Empty();
				// set the static mesh to logwatermesh
				BlockMesh->SetStaticMesh(LogWaterMesh);
				// set as walkable
				Walkable = true;

				//UE_LOG(LogTemp, Warning, TEXT("Changing Mesh and deleting log."));
			}
			
		}
	}		
}


