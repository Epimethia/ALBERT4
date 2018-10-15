// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Environment.h"


ABlock_Environment_0::ABlock_Environment_0() {
	//This block is not walkable
	Walkable = false;

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Environment_Block/MESH_Unwalkable_Shrub.MESH_Unwalkable_Shrub'")).Object);
	BlockMesh->SetCanEverAffectNavigation(false);
}