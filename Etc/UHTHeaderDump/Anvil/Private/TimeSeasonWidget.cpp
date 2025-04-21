#include "TimeSeasonWidget.h"

UTimeSeasonWidget::UTimeSeasonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TimeSeasonPanel = NULL;
    this->AgeTimeSeconds = 0.00f;
    this->CurrentTimeHours = 0;
    this->CurrentTimeMinutes = 0;
    this->CurrentTimeSeconds = 0;
    this->Season = 0.00f;
    this->RainIntensity = 0.00f;
    this->SnowIntensity = 0.00f;
}

ESlateVisibility UTimeSeasonWidget::GetCurrentVisibility() {
    return ESlateVisibility::Visible;
}


