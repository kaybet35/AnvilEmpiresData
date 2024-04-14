#include "AnvilRootWidget.h"

UAnvilRootWidget::UAnvilRootWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ScreenCanvas = NULL;
    this->BackgroundImage = NULL;
    this->DialogBox = NULL;
    this->WatermarkCanvas = NULL;
    this->WatermarkVersionText = NULL;
    this->AlertsContainerWidget = NULL;
}

ESlateVisibility UAnvilRootWidget::GetAlertsContainerVisibility() {
    return ESlateVisibility::Visible;
}


