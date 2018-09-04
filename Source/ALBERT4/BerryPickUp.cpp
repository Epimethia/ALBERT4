// Fill out your copyright notice in the Description page of Project Settings.

#include "BerryPickUp.h"
//draw debug help 
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine.h"
// Sets default values
ABerryPickUp::ABerryPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bPickedUp = false;
	//Initialisng Radius
	CollisionRadius = 50.0f;
	PickUpCollision = CreateDefaultSubobject<USphereComponent>(TEXT("PickUp"));
	PickUpCollision->InitSphereRadius(CollisionRadius);
	PickUpCollision->SetCollisionProfileName("Trigger");
	RootComponent = PickUpCollision;

	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickUpMesh"));
	PickUpMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Pickup/PickUpMesh.PickUpMesh'")).Object);
	PickUpCollision->SetupAttachment(RootComponent);

	PickUpCollision->OnComponentBeginOverlap.AddDynamic(this, &ABerryPickUp::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ABerryPickUp::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(Points), true);
}

// Called every frame
void ABerryPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Draws sphere with same radius as our trigger for visual represnetation
	DrawDebugSphere(GetWorld(), GetActorLocation(), CollisionRadius, 20, FColor::Purple, false, -1, 0, 1);

	
	
}

void ABerryPickUp::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		
		if(Destroy())
		Points+= 20;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(Points), true);
	}
}