// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Environment_2.h"

ABlock_Environment_2::ABlock_Environment_2() {
	//This block is not walkable
	Walkable = false;

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Environment_Block/Environment_Block_2_Mesh.Environment_Block_2_Mesh'")).Object);
	BlockMesh->SetCanEverAffectNavigation(false);
}


