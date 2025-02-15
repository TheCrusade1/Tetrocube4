// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TetrominoBase.generated.h"

class ABlockBase;

UCLASS()
class TETROCUBE5_API ATetrominoBase : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ATetrominoBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<FVector> BlockPositions;
	UPROPERTY(VisibleAnywhere, Category="ATTRIBUTES")
	int8 Orientation = 0;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	TSubclassOf<ABlockBase> BP_BlockBase;
	UPROPERTY(BluePrintReadOnly, VisibleAnywhere, Category = "ATTRIBUTES")
	TArray<ABlockBase*> Blocks;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetBlockPositions();

};
