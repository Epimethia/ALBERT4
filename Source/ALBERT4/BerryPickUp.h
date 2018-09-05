// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BerryPickUp.generated.h"

UCLASS()
class ALBERT4_API ABerryPickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABerryPickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Declaring Collsion Component
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* PickUpCollision;

	// Declare mesh component
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* PickUpMesh;

	float CollisionRadius;
	bool bPickedUp;
	UPROPERTY(BlueprintReadWrite)
	int Points;
	UPROPERTY(BlueprintReadWrite)
	int TotalPoints;
	// Declare overlap begin function
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
