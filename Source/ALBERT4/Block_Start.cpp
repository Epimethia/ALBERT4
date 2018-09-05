// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Start.h"

ABlock_Start::ABlock_Start() {
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Start_Block/Start_Block_Mesh.Start_Block_Mesh'")).Object);
}

