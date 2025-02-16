// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TetrominoBase.h"
#include "Tetromino_Z.generated.h"

/**
 * 
 */
UCLASS()
class TETROCUBE3_API ATetromino_Z : public ATetrominoBase
{
	GENERATED_BODY()
	
public:
	ATetromino_Z();

protected:

	void BeginPlay() override;
	void SetBlockPositions();
};
