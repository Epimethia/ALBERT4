// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Boulder.h"
#include "DrawDebugHelpers.h"

ABlock_Boulder::ABlock_Boulder() {
	PrimaryActorTick.bCanEverTick = true;
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Boulder_Block/Boulder_Block_Mesh.Boulder_Block_Mesh'")).Object);
}

void ABlock_Boulder::BeginPlay() {
	Super::BeginPlay();
	m_bFalling = false;
	m_bIsActive = false;
	
	BlockMesh->SetCollisionProfileName(FName("BlockAll"));
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
		FCollisionQueryParams p();

		//raycast downwards to see if there is something underneath the boulder
		bool FrontRightCollision = GetWorld()->LineTraceSingleByChannel(
			r, GetActorLocation(), GetActorLocation() + FVector(49.0f, 49.0f, -1.0f), ECC_PhysicsBody, &p
		);
		bool BackLeftCollision = GetWorld()->LineTraceSingleByChannel(
			r, GetActorLocation(), GetActorLocation() + FVector(-49.0f, -49.0f, -1.0f), ECC_PhysicsBody, &p
		);

		if (FrontRightCollision || BackLeftCollision) {
			m_bFalling = false;
		}
		else {
			m_bFalling = true;
		}

		FVector fw = GetActorLocation() + (Dir * 51.0f);
		FVector start = GetActorLocation();
		start.Z += 50.0f;
		fw.Z += 50.0f;
		//DrawDebugLine(GetWorld(), fw, start, FColor::Emerald, false, -1.0, 0, 10);
		bool ForwardCollision = GetWorld()->LineTraceSingleByChannel(
			r, start, fw, ECC_PhysicsBody, &p
		);

		if (ForwardCollision) {
			if (r.GetActor()->IsA(ABlock_Boulder::StaticClass())) {
				r.GetActor()->Destroy();
				Destroy();
			}
			m_bIsActive = false;
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
