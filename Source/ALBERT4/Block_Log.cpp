// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Log.h"

// Sets default values
ABlock_Log::ABlock_Log()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FVector scalingVector = FVector(0.75f, 0.75f, 0.75f); // Vector used to calculate the correct scaling for the box collider and mesh

	// Setup box collider
	//BoxCollider = CreateDefaultSubobject<UBoxComponent>(FName("BoxCollider"));	
	//BoxCollider->AttachToComponent(BlockMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	//BoxCollider->SetBoxExtent(FVector(-50.0f, -50.0f, 50.0f) * (FVector(2.0f, 2.0f, 2.0f) - scalingVector));		
	//BoxCollider->SetCollisionProfileName(FName("BlockAll"));	

	// Setup collision
	BlockMesh->SetCollisionProfileName(FName("BlockAll"));
	BlockMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Ignore);	
	BlockMesh->SetRelativeScale3D(scalingVector);

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Log_Block/MESH_Obstacle_Log.MESH_Obstacle_Log'")).Object);
	BlockMesh->SetCanEverAffectNavigation(false);
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
}


