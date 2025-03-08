#include "MapWidget.h"

UMapWidget::UMapWidget() {
    this->FogOfWarMask = NULL;
    this->FogOfWarRadius = 5;
    this->ObjectiveBorder = NULL;
    this->CentralMarketplaceWidgetBorder = NULL;
    this->CentralMarketplaceWidget = NULL;
    this->SeasonText = NULL;
    this->TimeOfDayText = NULL;
    this->MapPostContainerWidget = NULL;
    this->WinConditionWidget = NULL;
}

FText UMapWidget::GetTimeOfDayText() {
    return FText::GetEmpty();
}

ESlateVisibility UMapWidget::GetSeasonTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UMapWidget::GetSeasonText() {
    return FText::GetEmpty();
}

ESlateVisibility UMapWidget::GetObjectiveBorderVisibility() {
    return ESlateVisibility::Visible;
}


