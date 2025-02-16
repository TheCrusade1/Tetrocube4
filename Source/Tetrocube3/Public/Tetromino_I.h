// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TetrominoBase.h"
#include "Tetromino_I.generated.h"

/**
 * 
 */
UCLASS()
class TETROCUBE3_API ATetromino_I : public ATetrominoBase
{
	GENERATED_BODY()

public:
	ATetromino_I();

protected:
	
	void BeginPlay() override;
	void SetBlockPositions() override;
};
