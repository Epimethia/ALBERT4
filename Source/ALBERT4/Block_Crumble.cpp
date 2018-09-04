// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Crumble.h"


ABlock_Crumble::ABlock_Crumble() {
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Crumble_Block/Crumble_Block_Mesh.Crumble_Block_Mesh'")).Object);
	
	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockTrigger"));
	Trigger->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f), true);
	Trigger->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f));
	Trigger->SetVisibility(true);
	Trigger->SetupAttachment(RootComponent);
	Trigger->bDynamicObstacle = true;
	Trigger->bGenerateOverlapEvents = true;

	FScriptDelegate DelegateBegin;
	DelegateBegin.BindUFunction(this, "OnTestOverlapBegin");
	Trigger->OnComponentBeginOverlap.Add(DelegateBegin);

	FScriptDelegate DelegateEnd;
	DelegateEnd.BindUFunction(this, "OnTestOverlapEnd");
	Trigger->OnComponentEndOverlap.Add(DelegateEnd);

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

void ABlock_Crumble::OnOverlapBegin(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult){
	UE_LOG(LogTemp, Warning, TEXT("Colliding"));
}

void ABlock_Crumble::OnOverlapEnd(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex){
	UE_LOG(LogTemp, Warning, TEXT("No Longer Colliding"));
}



