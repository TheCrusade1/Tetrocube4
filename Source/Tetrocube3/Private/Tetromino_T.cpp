// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetromino_T.h"
#include "BlockBase.h"

ATetromino_T::ATetromino_T()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATetromino_T::BeginPlay()
{
	Super::BeginPlay();
}

void ATetromino_T::SetBlockPositions()
{
	Super::SetBlockPositions();
	switch (Orientation) {
	case 0:
		Blocks[0]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		break;
	case 1:
		Blocks[0]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[7] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		break;
	case 2:
		Blocks[0]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[7] + GetActorLocation());
		break;
	case 3:
		Blocks[0]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[7] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		break;
	}
}
