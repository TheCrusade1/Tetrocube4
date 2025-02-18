// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TetrominoBase.generated.h"

class ABlockBase;

UCLASS()
class TETROCUBE3_API ATetrominoBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATetrominoBase();
	virtual void Drop();
	FORCEINLINE virtual bool IsDropping() const { return bIsDropping; };
	FORCEINLINE virtual bool IsFinishedDropping() const { return bIsFinishedDropping; };
	virtual TArray<ABlockBase*> SetCollisionToStatic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Move(FVector newPosition, FVector prevPos);
	virtual void MoveLeft();
	virtual void MoveRight();
	virtual void MoveUp();
	virtual void MoveDown();
	virtual void CheckSetRevertPosition(FVector prevPos);
	

	UPROPERTY(VisibleAnywhere, Category = "ATTRIBUTES")
	int8 Orientation = 0;
	UPROPERTY(BluePrintReadWrite, VisibleAnywhere, Category="ATTRIBUTES")
	float MoveBuffer = 100.f;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	TSubclassOf<ABlockBase> BP_BlockBase;
	UPROPERTY(BluePrintReadOnly, VisibleAnywhere, Category = "ATTRIBUTES")
	TArray<ABlockBase*> Blocks;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="ATTRIBUTES")
	float TimeBetweenMoves = .0125f;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ATTRIBUTES")
	float TimeBetweenDroppingMoves = .00625f;

	TArray<FVector> BlockPositions;
	FVector inputLoc;
	FTimerHandle MoveXTimer;
	FTimerHandle MoveZTimer;
	bool bIsDropping = false;
	bool bIsFinishedDropping = false; 

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetBlockPositions();
	virtual void SetPosition(FVector newPosition);
	virtual void SetInputLoc(FVector loc);
	void SetDirectionAndMoveTimers(int8 direction);
	virtual bool IsColliding();
	

};
