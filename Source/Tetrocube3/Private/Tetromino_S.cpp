// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetromino_S.h"
#include "BlockBase.h"

ATetromino_S::ATetromino_S()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATetromino_S::BeginPlay()
{
	Super::BeginPlay();
}

void ATetromino_S::SetBlockPositions()
{
	Super::SetBlockPositions();
	switch (Orientation) {
	case 0:
	case 2:
		Blocks[1]->SetActorLocation(BlockPositions[0] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		Blocks[0]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		break;
	case 1:
	case 3:
		Blocks[0]->SetActorLocation(BlockPositions[7] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[2] + GetActorLocation());
		break;
	}
}
