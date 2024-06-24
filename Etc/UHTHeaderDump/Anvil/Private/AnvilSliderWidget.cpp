#include "AnvilSliderWidget.h"

UAnvilSliderWidget::UAnvilSliderWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LabelTextBox = NULL;
    this->Slider = NULL;
}

void UAnvilSliderWidget::NativeOnSliderChanged(const float Value) {
}


