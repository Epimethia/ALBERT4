// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Boulder.h"
#include "Block_Crumble.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

ABlock_Boulder::ABlock_Boulder() {
	PrimaryActorTick.bCanEverTick = true;
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Boulder_Block/MESH_Obstacle_Bloulder.MESH_Obstacle_Bloulder'")).Object);
}

void ABlock_Boulder::BeginPlay() {
	Super::BeginPlay();
	m_bFalling = false;
	m_bIsActive = false;
	
	BlockMesh->SetCollisionProfileName(FName("BlockAll"));
	BlockMesh->bGenerateOverlapEvents = true;
	Dir = GetActorRotation().Vector();
	Dir.Normalize();
	BlockMesh->GetBodyInstance()->bLockXRotation = true;
	BlockMesh->GetBodyInstance()->bLockZRotation = true;
	BlockMesh->GetBodyInstance()->bLockYRotation = true;
	BlockMesh->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);

}

void ABlock_Boulder::Tick(float _DeltaTime) {
	if (m_bIsActive) {
		
		FHitResult r;			

		//raycast downwards to see if there is something underneath the boulder
		bool FrontRightCollision = GetWorld()->LineTraceSingleByChannel(
			r, GetActorLocation(), GetActorLocation() + FVector(49.0f, 49.0f, -1.0f), ECC_PhysicsBody, FCollisionQueryParams(FName("Trace"), true, this)
		);

		bool BackLeftCollision = GetWorld()->LineTraceSingleByChannel(
			r, GetActorLocation(), GetActorLocation() + FVector(-49.0f, -49.0f, -1.0f), ECC_PhysicsBody, FCollisionQueryParams(FName("Trace"), true, this)
		);

		if (FrontRightCollision || BackLeftCollision) {
			m_bFalling = false;
		}
		else {
			m_bFalling = true;
		}

		// Check directly in front of the boulder
		FVector fw = GetActorLocation() + (Dir * 100.0f);
		FVector start = GetActorLocation();
		start.Z += 50.0f;
		fw.Z += 50.0f;
		//DrawDebugLine(GetWorld(), start, fw, FColor::Emerald, false, -1.0, 0, 10);
		bool ForwardCollision = GetWorld()->LineTraceSingleByChannel(
			r, start, fw, ECC_PhysicsBody, FCollisionQueryParams(FName("Trace"), true, this)
		);			
		
		if (ForwardCollision && FVector::DistXY(start, r.Actor->GetActorLocation()) <= 100) {
			//UE_LOG(LogTemp, Warning, TEXT("%f"), FVector::DistXY(start, r.Actor->GetActorLocation()));
			if (r.GetActor()->IsA(ABlock_Boulder::StaticClass())) {
				r.GetActor()->Destroy();
				Destroy();
			}
			m_bIsActive = false;
			return;
		}

		// Check the block in front of the boulder for its walkable status
		fw = GetActorLocation() + (Dir * 100.0f);
		start = GetActorLocation();
		start.Z += 50.0f;
		fw.Z -= 50.0f;
		//DrawDebugLine(GetWorld(), start, fw, FColor::Emerald, false, -1.0, 0, 10);
		ForwardCollision = GetWorld()->LineTraceSingleByChannel(
			r, start, fw, ECC_PhysicsBody, FCollisionQueryParams(FName("Trace"), true, this)
		);

		// Find out if the block is walkable
		if (ForwardCollision)
		{
			// Cast to walkable block
			ABaseBlock* adjacentBlock = static_cast<ABaseBlock*>(r.GetActor());
			// Check if the cast was successful and if the block is walkable
			if (adjacentBlock != nullptr && !adjacentBlock->Walkable)
			{			
				UE_LOG(LogTemp, Warning, TEXT("%f"), FVector::DistXY(start, r.Actor->GetActorLocation()));
				// If the block is not walkable, check how far we're from it and set the boulder as inactive as neccessary 
				if (FVector::DistXY(start, r.Actor->GetActorLocation()) <= 101.9f) {
					m_bIsActive = false;
					return;
				}
			}
		}

		float t = 0.03f;
		if (m_bFalling == true) {
			SetActorLocation(FMath::Lerp(GetActorLocation(), GetActorLocation() + FVector(0.0f, 0.0f, -100.0f), t));
		}
		else {
			SetActorLocation(FMath::Lerp(GetActorLocation(), GetActorLocation() + (Dir * FVector(100.0f, 100.0f, 0.0f)), t));
		}
	}
}

void ABlock_Boulder::Activate() {
	m_bIsActive = true;
}
