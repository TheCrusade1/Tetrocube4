// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TetrominoBase.h"
#include "Tetromino_L.generated.h"

/**
 * 
 */
UCLASS()
class TETROCUBE3_API ATetromino_L : public ATetrominoBase
{
	GENERATED_BODY()
	
public:
	ATetromino_L();

protected:

	void BeginPlay() override;
	void SetBlockPositions();
};
