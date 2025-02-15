// Fill out your copyright notice in the Description page of Project Settings.


#include "TetrocubeHUD.h"
#include "TetrocubeHUDWidget.h"

//void ATetrocubeHUD::BeginPlay()
//{
    //UTetrocubeHUDWidget* widget = CreateWidget<UTetrocubeHUDWidget>(GetWorld()->GetFirstPlayerController(), HUDWidget);
    //widget->AddToViewport();
    //widget->SetTimerText(99.99999f);
    //widget->SetActiveSliceText(100.f);
//}

void ATetrocubeHUD::BeginPlay()
{
    if (GetWorld() && GetWorld()->GetFirstPlayerController())
    {
		UTetrocubeHUDWidget* widget = CreateWidget<UTetrocubeHUDWidget>(GetWorld()->GetFirstPlayerController(), HUDWidget);
            //CreateWidget<UTetrocubeHUDWidget>(GetWorld()->GetFirstPlayerController(), HUDWidget);
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

ATetrocubeHUD::ATetrocubeHUD()
{
    // Assuming UTetrocubeHUDWidget is the class you want to use for the HUD widget
    static ConstructorHelpers::FClassFinder<UTetrocubeHUDWidget> HUDWidgetClass(TEXT("/Game/Blueprints/HUD/BP_TetrocubeHUDWidget"));
    if (HUDWidgetClass.Succeeded())
    {
        HUDWidget = HUDWidgetClass.Class;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find HUD widget class."));
    }
}
