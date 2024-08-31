#include "MapWidget.h"

UMapWidget::UMapWidget() {
    this->FogOfWarMask = NULL;
    this->FogOfWarRadius = 5;
    this->ObjectiveBorder = NULL;
    this->CentralMarketplaceWidgetBorder = NULL;
    this->CentralMarketplaceWidget = NULL;
}

ESlateVisibility UMapWidget::GetObjectiveBorderVisibility() {
    return ESlateVisibility::Visible;
}


