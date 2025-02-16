// Fill out your copyright notice in the Description page of Project Settings.


#include "TetrominoBase.h"
#include "BlockBase.h"

// Sets default values
ATetrominoBase::ATetrominoBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BlockPositions.Add(FVector(-100, 0, -100));
	BlockPositions.Add(FVector(0, 0, -100));
	BlockPositions.Add(FVector(100, 0, -100));
	BlockPositions.Add(FVector(-100, 0, 0));
	BlockPositions.Add(FVector(0, 0, 0));
	BlockPositions.Add(FVector(100, 0, 0));
	BlockPositions.Add(FVector(-100, 0, 100));
	BlockPositions.Add(FVector(0, 0, 100));
	BlockPositions.Add(FVector(100, 0, 100));
	Orientation = 0;
}

// Called when the game starts or when spawned
void ATetrominoBase::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 4; i++) {
		Blocks.Add(
			GetWorld()->SpawnActor<ABlockBase>(
				BP_BlockBase,
				GetActorLocation(),
				GetActorRotation()
			)
		);
	}

	Orientation = 0;
	SetBlockPositions();
}

// Called every frame
void ATetrominoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATetrominoBase::SetBlockPositions()
{
}

void ATetrominoBase::SetPosition(FVector newPosition)
{
	SetActorLocation(newPosition);
	SetBlockPositions();
}

