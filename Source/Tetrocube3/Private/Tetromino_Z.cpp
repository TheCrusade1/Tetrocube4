// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetromino_Z.h"
#include "BlockBase.h"

ATetromino_Z::ATetromino_Z()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATetromino_Z::BeginPlay()
{
	Super::BeginPlay();
}

void ATetromino_Z::SetBlockPositions()
{
	Super::SetBlockPositions();

	switch (Orientation) {
	case 0:
	case 2:
		Blocks[1]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[2] + GetActorLocation());
		Blocks[0]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		break;
	case 1:
	case 3:
		Blocks[0]->SetActorLocation(BlockPositions[8] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		break;
	}
}

