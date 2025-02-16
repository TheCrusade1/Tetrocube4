// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetromino_O.h"
#include "BlockBase.h"

ATetromino_O::ATetromino_O()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATetromino_O::BeginPlay()
{
	Super::BeginPlay();
}

void ATetromino_O::SetBlockPositions()
{
	Super::SetBlockPositions();

	switch (Orientation) {
	case 0:
		Blocks[0]->SetActorLocation(BlockPositions[0] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		break;
	case 1:
		Blocks[0]->SetActorLocation(BlockPositions[3] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[6] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[7] + GetActorLocation());
		break;
	case 2:
		Blocks[0]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[7] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[8] + GetActorLocation());
		break;
	case 3:
		Blocks[0]->SetActorLocation(BlockPositions[4] + GetActorLocation());
		Blocks[2]->SetActorLocation(BlockPositions[5] + GetActorLocation());
		Blocks[3]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		Blocks[1]->SetActorLocation(BlockPositions[1] + GetActorLocation());
		break;

	}
}
