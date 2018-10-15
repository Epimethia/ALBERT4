// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Environment_1.h"

ABlock_Environment_1::ABlock_Environment_1() {
	//This block is not walkable
	Walkable = false;

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Environment_Block/MESH_Unwalkable_Rocks.MESH_Unwalkable_Rocks'")).Object);
	BlockMesh->SetCanEverAffectNavigation(false);
}