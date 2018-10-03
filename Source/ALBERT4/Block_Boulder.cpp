// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Boulder.h"
#include "Engine/World.h"
ABlock_Boulder::ABlock_Boulder() {
	PrimaryActorTick.bCanEverTick = true;
	t = 0.0f;
	Dir = FVector(-1.0f, 0.0f, 0.0f);
}

void ABlock_Boulder::BeginPlay() {
	Super::BeginPlay();
	m_bRolling = true;
	m_bFalling = false;
	PrevPos = GetActorLocation();
	BlockMesh->SetCollisionProfileName(FName("BlockAll"));
	//BlockMesh->SetSimulatePhysics(true);
	//BlockMesh->GetBodyInstance()->bLockYTranslation = true;
	BlockMesh->GetBodyInstance()->bLockXRotation = true;
	BlockMesh->GetBodyInstance()->bLockZRotation = true;
	BlockMesh->GetBodyInstance()->bLockYRotation = true;
	BlockMesh->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);

}

void ABlock_Boulder::Tick(float _DeltaTime) {
	FHitResult r;
	FCollisionObjectQueryParams p;
	//raycast downwards to see if there is something underneath the boulder
	bool f = GetWorld()->LineTraceSingleByChannel(
		r, GetActorLocation(), GetActorLocation() + FVector(0.0f, 0.0f, -1.0f), ECC_PhysicsBody, &p
	);
	//if collision, stop falling
	if (f) {
		UE_LOG(LogTemp, Warning, TEXT("Object Below"));
		m_bFalling = false;
		//PrevPos = GetActorLocation();
	}

	else if (t <= 1.0f) {
		t += _DeltaTime * 2.0f;
		if (m_bRolling) {
			SetActorLocation(FMath::Lerp(PrevPos, PrevPos + (Dir * FVector(100.0f, 100.0f, 0.0f)), t));
		}
		else if (m_bFalling) {
			SetActorLocation(FMath::Lerp(PrevPos, PrevPos + FVector(0.0f, 0.0f, -100.0f), t));
		}
		//return;
	}
	//
	//else if (m_bRolling) {
	//	bool g = GetWorld()->LineTraceSingleByChannel(
	//		r, GetActorLocation(), GetActorLocation() + Dir, ECC_PhysicsBody, &p
	//	);
	//	//if collision, stop rolling
	//	if (g) {
	//		m_bRolling = false;
	//		PrevPos = GetActorLocation();
	//	}
	//}
}

void ABlock_Boulder::Fall() {

}