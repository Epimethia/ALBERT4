// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Crumble.h"




ABlock_Crumble::ABlock_Crumble() {
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Crumble_Block/Crumble_Block_Mesh.Crumble_Block_Mesh'")).Object);
	SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	SetActorTickEnabled(true);
}

void ABlock_Crumble::Crumble() {
	GetWorldTimerManager().SetTimer(FallTimer, this, &ABlock_Crumble::Fall, 1.0f, false);

}

void ABlock_Crumble::Fall() {
	BlockMesh->SetRelativeScale3D(FVector(0.995f, 0.995f, 0.995f));
	BlockMesh->SetCollisionProfileName(FName("OverlapAll"));
	BlockMesh->SetSimulatePhysics(true);
}



