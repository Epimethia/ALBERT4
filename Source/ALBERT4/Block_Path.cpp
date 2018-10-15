// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Path.h"




ABlock_Path::ABlock_Path() {
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Path_Block/MESH_Walkable_Glound.MESH_Walkable_Glound'")).Object);
}