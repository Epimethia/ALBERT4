// Fill out your copyright notice in the Description page of Project Settings.

#include "Block_Crumble.h"
#include "DestructibleMesh.h"
#include "Engine.h"
#include "Block_Log.h"
#include "Block_Boulder.h"

ABlock_Crumble::ABlock_Crumble() {
	BlockMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Crumble_Block/Crumbling.Crumbling'")).Object);
	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockTrigger"));
	Trigger->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f), true);
	Trigger->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
	Trigger->SetVisibility(true);
	Trigger->SetupAttachment(RootComponent);
	Trigger->bDynamicObstacle = true;
	Trigger->bGenerateOverlapEvents = true;
	Trigger->SetCanEverAffectNavigation(false);

	Trigger->OnComponentBeginOverlap.AddDynamic(this, &ABlock_Crumble::OnOverlapBegin);
	Trigger->OnComponentEndOverlap.AddDynamic(this, &ABlock_Crumble::OnOverlapEnd);

	Walkable = true;

	SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	SetActorTickEnabled(true);
}

void ABlock_Crumble::Crumble() {
	GetWorldTimerManager().SetTimer(FallTimer, this, &ABlock_Crumble::Fall, 2.0f, false);

}


void ABlock_Crumble::Fall() {
	UGameplayStatics::PlaySound2D(GetWorld(), Audio);
	BlockMesh->SetRelativeScale3D(FVector(0.995f, 0.995f, 0.995f));
	BlockMesh->SetCollisionProfileName(FName("OverlapAll"));
	BlockMesh->SetSimulatePhysics(true);	
}

void ABlock_Crumble::OnOverlapBegin(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult){
	//UE_LOG(LogTemp, Warning, TEXT("Colliding"));
	//casting the other actor hit to a log block
	if (OtherActor->IsA(ABlock_Log::StaticClass())) {
		UE_LOG(LogTemp, Warning, TEXT("Colliding with Log"));
		return;
	}
	Crumble();
}

void ABlock_Crumble::OnOverlapEnd(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){
	//UE_LOG(LogTemp, Warning, TEXT("No Longer Colliding"));

	
}



