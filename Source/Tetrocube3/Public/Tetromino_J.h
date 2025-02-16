// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TetrominoBase.h"
#include "Tetromino_J.generated.h"

/**
 * 
 */
UCLASS()
class TETROCUBE3_API ATetromino_J : public ATetrominoBase
{
	GENERATED_BODY()
	
public:
	ATetromino_J();

protected:

	void BeginPlay() override;
	void SetBlockPositions();
};
