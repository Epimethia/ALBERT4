// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_LadderTree.h"

// Sets default values
ABlock_LadderTree::ABlock_LadderTree()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Ladder_Block/Long_tree.Long_tree'")).Object);
	BlockMesh->SetCanEverAffectNavigation(false);
}

// Called when the game starts or when spawned
void ABlock_LadderTree::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABlock_LadderTree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



