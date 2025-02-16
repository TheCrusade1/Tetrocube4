// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Tetrocube3HUD.generated.h"

class UTetrocube3HUDWidget;

UCLASS()
class TETROCUBE3_API ATetrocube3HUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	ATetrocube3HUD();
	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	TSubclassOf<UTetrocube3HUDWidget> HUDWidget;
};