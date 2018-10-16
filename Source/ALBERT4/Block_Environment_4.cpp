// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Environment_4.h"


ABlock_Environment_4::ABlock_Environment_4() {
	//This block is not walkable
	Walkable = false;

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Environment_Block/MESH_Unwalkable_Path.MESH_Unwalkable_Path'")).Object);
	BlockMesh->SetCanEverAffectNavigation(false);
}


