// Fill out your copyright notice in the Description page of Project Settings.

#include "BerryPickUp.h"
//draw debug help 
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerCharacter.h"
#include "ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine.h"

// Sets default values
ABerryPickUp::ABerryPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickUpMesh"));
	PickUpMesh->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Blocks/Pickup/PickUpMesh.PickUpMesh'")).Object);

	RootComponent = PickUpMesh;

	bPickedUp = false;
	//Initialisng Radius
	CollisionRadius = 50.0f;
	PickUpCollision = CreateDefaultSubobject<USphereComponent>(TEXT("PickUp"));
	PickUpCollision->InitSphereRadius(CollisionRadius);
	PickUpCollision->SetCollisionProfileName("OverlapAll");
	PickUpCollision->SetupAttachment(RootComponent);

	PickUpCollision->OnComponentBeginOverlap.AddDynamic(this, &ABerryPickUp::OnOverlapBegin);

	////Sound
	//static ConstructorHelpers::FObjectFinder<USoundCue> AudioBiteCue(TEXT("'/Game/Assets/Sounds/Bites_Cue.Bites_Cue'"));
	////Stop a reference to the cue asset
	//BiteCue = AudioBiteCue.Object;
	////Audio component, it rapws the cue and allows intertacion with code
	//BiteAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Bite"));
	//BiteAudio->bAutoActivate = false;
	//BiteAudio->SetupAttachment(GetRootComponent());
	//
	


}

// Called when the game starts or when spawned
void ABerryPickUp::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(Points), true);
	//BiteAudio->SetSound(BiteCue);
}

// Called every frame
void ABerryPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Draws sphere with same radius as our trigger for visual represnetation
	//DrawDebugSphere(GetWorld(), GetActorLocation(), CollisionRadius, 20, FColor::Purple, false, -1, 0, 1);
	
}


void ABerryPickUp::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*if((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		UGameplayStatics::PlaySound2D(GetWorld(), AudioComponent, 1.0f, 1.0f, 0.0f);
		Destroy();
		
	}*/
}

