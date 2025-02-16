// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetrocube3HUDWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Overlay.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetTextLibrary.h"

void UTetrocube3HUDWidget::SetTimerText(float time)
{
	Time->SetText(UKismetTextLibrary::Conv_DoubleToText(time, ERoundingMode::ToZero));

}

void UTetrocube3HUDWidget::SetActiveSliceText(float activeSlice)
{
	ActiveSliceNumberText->SetText(FText::AsNumber(activeSlice));
}
