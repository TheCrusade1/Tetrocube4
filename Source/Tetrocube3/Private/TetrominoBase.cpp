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

void ATetrominoBase::Move(FVector newPosition, FVector prevPos)
{
	SetPosition(newPosition);
	/*if (!bIsDropping) {
		FindBestRotation();
	}*/
	CheckSetRevertPosition(prevPos);
}

void ATetrominoBase::MoveLeft()
{
	FVector prevPos = GetActorLocation();
	if (inputLoc.X < prevPos.X - MoveBuffer || bIsDropping) {
		Move(FVector(prevPos.X - 100, prevPos.Y, prevPos.Z), prevPos);
	}
	//else {
		//FindBestRotation();
	//}
}

void ATetrominoBase::MoveRight()
{
	FVector prevPos = GetActorLocation();
	if (inputLoc.X > prevPos.X + MoveBuffer || bIsDropping) {
		Move(FVector(prevPos.X + 100, prevPos.Y, prevPos.Z), prevPos);
	}
	//else {
		//FindBestRotation();
	//}
}

void ATetrominoBase::MoveUp()
{
	FVector prevPos = GetActorLocation();
	if (inputLoc.Z > prevPos.Z + MoveBuffer || bIsDropping) {
		Move(FVector(prevPos.X, prevPos.Y, prevPos.Z + 100), prevPos);
	}
	//else {
		//FindBestRotation();
	//}
}

void ATetrominoBase::MoveDown()
{
	FVector prevPos = GetActorLocation();
	if (inputLoc.Z < prevPos.Z - MoveBuffer || bIsDropping) {
		Move(FVector(prevPos.X, prevPos.Y, prevPos.Z - 100), prevPos);
	}
	//else {
		//FindBestRotation();
	//}
}

void ATetrominoBase::CheckSetRevertPosition(FVector prevPos)
{
	if (IsColliding()) {
		SetPosition(prevPos);
	}
}

void ATetrominoBase::Drop()
{
	GetWorldTimerManager().ClearAllTimersForObject(this);
	if (!GetWorldTimerManager().IsTimerActive(MoveZTimer)) {
		GetWorldTimerManager().SetTimer(MoveZTimer, this, &ATetrominoBase::MoveDown, TimeBetweenDroppingMoves, true);
		bIsDropping = true;
	}
}

TArray<ABlockBase *> ATetrominoBase::SetCollisionToStatic()
{
	for (auto &block:Blocks) {
		block->SetCollisionToStatic();
	}
	return Blocks;
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

void ATetrominoBase::SetInputLoc(FVector loc)
{
	inputLoc = loc;
}

void ATetrominoBase::SetDirectionAndMoveTimers(int8 direction)
{
	switch (direction) {
	case 1:
		if (!GetWorldTimerManager().IsTimerActive(MoveXTimer)) {
			GetWorldTimerManager().SetTimer(MoveXTimer, this, &ATetrominoBase::MoveRight, TimeBetweenMoves, false);
		}
	break;
	case -1:
		if (!GetWorldTimerManager().IsTimerActive(MoveXTimer)) {
			GetWorldTimerManager().SetTimer(MoveXTimer, this, &ATetrominoBase::MoveLeft, TimeBetweenMoves, false);
		}
		break;
	case 2:
		if (!GetWorldTimerManager().IsTimerActive(MoveZTimer)) {
			GetWorldTimerManager().SetTimer(MoveZTimer, this, &ATetrominoBase::MoveUp, TimeBetweenMoves, false);
		}
		break;
	case -2:
		if (!GetWorldTimerManager().IsTimerActive(MoveZTimer)) {
			GetWorldTimerManager().SetTimer(MoveZTimer, this, &ATetrominoBase::MoveDown, TimeBetweenMoves, false);
		}
		break;
	}
}

bool ATetrominoBase::IsColliding()
{
	for (ABlockBase *&block : Blocks) {
		if (block->IsColliding()) {
			if (bIsDropping) {
				GetWorldTimerManager().ClearAllTimersForObject(this);
				bIsDropping = false;
				bIsFinishedDropping = true;
			}
			return true;
		}
	}
	return false;
}

