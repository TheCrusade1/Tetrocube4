// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetromino_I.h"
#include "BlockBase.h"



ATetromino_I::ATetromino_I()
{
	PrimaryActorTick.bCanEverTick = false;

	BlockPositions.Empty();
	BlockPositions.Add(FVector(0, 0, 0));
	BlockPositions.Add(FVector(-100, 0, 0));
	BlockPositions.Add(FVector(100, 0, 0));
	BlockPositions.Add(FVector(200, 0, 0));

	BlockPositions.Add(FVector(0, 0, 100));
	BlockPositions.Add(FVector(0, 0, 200));
	BlockPositions.Add(FVector(0, 0, 300));
}

void ATetromino_I::BeginPlay()
{
	Super::BeginPlay();
	Orientation = 0;
	SetBlockPositions();
}

void ATetromino_I::SetBlockPositions()
{
	Super::SetBlockPositions();

	switch(Orientation){
		case 0:
		case 2:
			Blocks[0]->SetActorLocation(BlockPositions[0] + GetActorLocation());
			Blocks[1]->SetActorLocation(BlockPositions[1] + GetActorLocation());
			Blocks[2]->SetActorLocation(BlockPositions[2] + GetActorLocation());
			Blocks[3]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		break;
		case 1:
		case 3:
			Blocks[0]->SetActorLocation(BlockPositions[0] + GetActorLocation());
			Blocks[1]->SetActorLocation(BlockPositions[4] + GetActorLocation());
			Blocks[2]->SetActorLocation(BlockPositions[5] + GetActorLocation());
			Blocks[3]->SetActorLocation(BlockPositions[6] + GetActorLocation());
		break;
	}
}
