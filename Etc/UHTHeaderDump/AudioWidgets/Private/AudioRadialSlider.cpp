#include "AudioRadialSlider.h"

UAudioRadialSlider::UAudioRadialSlider() {
    this->Value = 0.00f;
    this->WidgetLayout = Layout_LabelBottom;
    this->UnitsText = FText::FromString(TEXT("units"));
    this->ShowLabelOnlyOnHover = false;
    this->ShowUnitsText = true;
    this->IsUnitsTextReadOnly = true;
    this->IsValueTextReadOnly = false;
    this->SliderThickness = 5.00f;
}

void UAudioRadialSlider::SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout) {
}

void UAudioRadialSlider::SetValueTextReadOnly(const bool bIsReadOnly) {
}

void UAudioRadialSlider::SetUnitsTextReadOnly(const bool bIsReadOnly) {
}

void UAudioRadialSlider::SetUnitsText(const FText Units) {
}

void UAudioRadialSlider::SetTextLabelBackgroundColor(FSlateColor InColor) {
}

void UAudioRadialSlider::SetSliderThickness(const float InThickness) {
}

void UAudioRadialSlider::SetSliderProgressColor(FLinearColor InValue) {
}

void UAudioRadialSlider::SetSliderBarColor(FLinearColor InValue) {
}

void UAudioRadialSlider::SetShowUnitsText(const bool bShowUnitsText) {
}

void UAudioRadialSlider::SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover) {
}

void UAudioRadialSlider::SetOutputRange(const FVector2D InOutputRange) {
}

void UAudioRadialSlider::SetHandStartEndRatio(const FVector2D InHandStartEndRatio) {
}

void UAudioRadialSlider::SetCenterBackgroundColor(FLinearColor InValue) {
}

float UAudioRadialSlider::GetSliderValue(const float OutputValue) {
    return 0.0f;
}

float UAudioRadialSlider::GetOutputValue(const float InSliderValue) {
    return 0.0f;
}


