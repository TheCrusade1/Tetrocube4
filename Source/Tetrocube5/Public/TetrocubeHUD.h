// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TetrocubeHUD.generated.h"

class UTetrocubeHUDWidget;

UCLASS()
class TETROCUBE5_API ATetrocubeHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	ATetrocubeHUD();
	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	TSubclassOf<UTetrocubeHUDWidget> HUDWidget;
};