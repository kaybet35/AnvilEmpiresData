#include "CombustionPanelWidget.h"

UCombustionPanelWidget::UCombustionPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FuelDurationText = NULL;
    this->CombustionDataComponent = NULL;
    this->FuelInputItemGrid = NULL;
    this->FuelOutputItemGrid = NULL;
}


