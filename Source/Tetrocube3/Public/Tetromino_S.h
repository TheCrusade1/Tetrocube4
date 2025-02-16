// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TetrominoBase.h"
#include "Tetromino_S.generated.h"

/**
 * 
 */
UCLASS()
class TETROCUBE3_API ATetromino_S : public ATetrominoBase
{
	GENERATED_BODY()
	
public:
	ATetromino_S();

protected:

	void BeginPlay() override;
	void SetBlockPositions();
};
