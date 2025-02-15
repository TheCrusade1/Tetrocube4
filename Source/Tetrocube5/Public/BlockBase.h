// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockBase.generated.h"

UCLASS()
class TETROCUBE5_API ABlockBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockBase();
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(BlueprintReadwrite, EditAnywhere, Category = "ATTRIBUTES")
	class UStaticMeshComponent* BlockMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ATTRIBUTES")
	class UBoxComponent* BlockCollision;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
