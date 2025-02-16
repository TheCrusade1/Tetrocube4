// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetrocube3HUD.h"
#include "Tetrocube3HUDWidget.h"

//void ATetrocube3HUD::BeginPlay()
//{
	//UTetrocube3HUDWidget* widget = CreateWidget<UTetrocube3HUDWidget>(GetWorld()->GetFirstPlayerController(), HUDWidget);
	//widget->AddToViewport();
	//widget->SetTimerText(99.99999f);
	//widget->SetActiveSliceText(100.f);
//}

void ATetrocube3HUD::BeginPlay()
{
    if (GetWorld() && GetWorld()->GetFirstPlayerController())
    {
        UTetrocube3HUDWidget* widget = CreateWidget<UTetrocube3HUDWidget>(GetWorld()->GetFirstPlayerController(), HUDWidget);
        if (widget)
        {
            widget->AddToViewport();
            widget->SetTimerText(99.99999f);
            widget->SetActiveSliceText(100.f);
        }
        else
        {
            // Handle widget creation failure
            UE_LOG(LogTemp, Error, TEXT("Failed to create HUD widget."));
        }
    }
    else
    {
        // Handle invalid world or player controller
        UE_LOG(LogTemp, Error, TEXT("Invalid world or player controller."));
    }

}

ATetrocube3HUD::ATetrocube3HUD()
{
    // Assuming UTetrocube3HUDWidget is the class you want to use for the HUD widget
    static ConstructorHelpers::FClassFinder<UTetrocube3HUDWidget> HUDWidgetClass(TEXT("/Game/Blueprints/HUD/BP_Tetrocube3HUDWidget"));
    if (HUDWidgetClass.Succeeded())
    {
        HUDWidget = HUDWidgetClass.Class;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find HUD widget class."));
    }
}
