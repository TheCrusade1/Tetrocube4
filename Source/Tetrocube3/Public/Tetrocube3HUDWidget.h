// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Tetrocube3HUDWidget.generated.h"

class UCanvasPanel;
class UOverlay;
class UImage;
class UVerticalBox;
class UHorizontalBox;
class UTextBlock;
UCLASS()
class TETROCUBE3_API UTetrocube3HUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetTimerText(float time);
	void SetActiveSliceText(float activeSlice);

private:
	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* HUDWidgetCanvasPanel;
	UPROPERTY(meta = (BindWidget))
	UOverlay* HUDWidgetOverlay;
	UPROPERTY(meta = (BindWidget))
	UImage* BorderImage;
	UPROPERTY(meta = (BindWidget))
	UImage* BackgroundImage;
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBoxContainer;
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* TopHorizontalBox;
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* BottomHorizontalBox;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* TimerText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Time;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ActiveSliceText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ActiveSliceNumberText;

};
