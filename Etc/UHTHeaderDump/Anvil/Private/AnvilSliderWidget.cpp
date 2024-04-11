#include "AnvilSliderWidget.h"

UAnvilSliderWidget::UAnvilSliderWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SliderLabelFontSize = 24;
    this->SliderProportion = 0.50f;
    this->SliderWidth = 400.00f;
    this->SliderHeight = 50.00f;
    this->LabelTextBox = NULL;
    this->SizeBox = NULL;
    this->Slider = NULL;
}

void UAnvilSliderWidget::NativeOnSliderChanged(const float Value) {
}


