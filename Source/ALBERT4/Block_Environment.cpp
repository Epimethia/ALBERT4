// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Environment.h"


ABlock_Environment::ABlock_Environment() {
	//This block is not walkable
	Walkable = false;

	//Setting the block mesh
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Environment_Block/Environment_Block_Mesh.Environment_Block_Mesh'")).Object);

}