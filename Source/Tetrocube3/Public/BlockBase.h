// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockBase.generated.h"

class UPrimitiveComponent;

UCLASS()
class TETROCUBE3_API ABlockBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABlockBase();
	FORCEINLINE bool IsColliding() const { return bColliding; }
	void SetCollisionToStatic();

protected:
	UPROPERTY(BlueprintReadwrite, EditAnywhere, Category = "ATTRIBUTES")
	class UStaticMeshComponent* BlockMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ATTRIBUTES")
	class UBoxComponent* BlockCollision;
	bool bColliding = false;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void SetColliding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void UnSetColliding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
