// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_End.h"



ABlock_End::ABlock_End() {
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/End_Block/End_Block_Mesh.End_Block_Mesh'")).Object);
}
