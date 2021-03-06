// Fill out your copyright notice in the Description page of Project Settings.
#include "Block_Water.h"
#include "Block_Interactable.h"
#include "Block_Log.h"
#include "Engine.h"

// Sets default values
ABlock_Water::ABlock_Water()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	
	
	// Set water blocks collision profile to overlap all
	//BlockMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BlockMesh->SetCollisionProfileName(FName("BlockAll"));

	// Set mesh variables for use later
	LogWaterMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Water_Block/MESH_Water_Log_Merged.MESH_Water_Log_Merged'")).Object;
	WaterMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Water_Block/Water_Block_Mesh.Water_Block_Mesh'")).Object;
	BlockMesh->SetStaticMesh(WaterMesh);	
	Walkable = false;
}

// Called when the game starts or when spawned
void ABlock_Water::BeginPlay()
{
	Super::BeginPlay();	
	
	BlockMesh->SetCanEverAffectNavigation(false);
	BlockMesh->SetCollisionProfileName(FName("Trigger"));
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
			//UE_LOG(LogTemp, Warning, TEXT("Water: %s"), *GetActorLocation().ToString());
			//UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), FVector::Distance(OverlappingActors[0]->GetActorLocation(), GetActorLocation()));
			
			if (FVector::Distance(OverlappingActors[0]->GetActorLocation(), GetActorLocation()) < 135.0f)
			{				
				// Attempt to destroy the log
				OverlappingActors[0]->Destroy();
				//OverlappingActors.Empty();
				// set the static mesh to logwatermesh
				BlockMesh->SetStaticMesh(LogWaterMesh);
				BlockMesh->SetCollisionProfileName(FName("BlockAll"));
				// set as walkable
				Walkable = true;
	
				//UE_LOG(LogTemp, Warning, TEXT("Changing Mesh and deleting log."));
			}
			
		}
	}		
}


