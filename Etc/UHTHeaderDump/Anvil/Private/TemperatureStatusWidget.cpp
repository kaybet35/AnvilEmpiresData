#include "TemperatureStatusWidget.h"

UTemperatureStatusWidget::UTemperatureStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IconFillImage = NULL;
}

ESlateVisibility UTemperatureStatusWidget::GetIconVisibility() {
    return ESlateVisibility::Visible;
}


