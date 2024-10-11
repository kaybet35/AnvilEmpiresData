#include "MapWidget.h"

UMapWidget::UMapWidget() {
    this->FogOfWarMask = NULL;
    this->FogOfWarRadius = 5;
    this->ObjectiveBorder = NULL;
    this->CentralMarketplaceWidgetBorder = NULL;
    this->CentralMarketplaceWidget = NULL;
    this->SeasonText = NULL;
    this->TimeOfDayText = NULL;
}

ESlateVisibility UMapWidget::GetObjectiveBorderVisibility() {
    return ESlateVisibility::Visible;
}


