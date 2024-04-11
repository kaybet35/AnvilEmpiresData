#include "AudioSliderBase.h"

UAudioSliderBase::UAudioSliderBase() {
    this->Value = 0.00f;
    this->UnitsText = FText::FromString(TEXT("units"));
    this->ShowLabelOnlyOnHover = false;
    this->ShowUnitsText = true;
    this->IsUnitsTextReadOnly = true;
    this->IsValueTextReadOnly = false;
    this->Orientation = Orient_Vertical;
}

void UAudioSliderBase::SetWidgetBackgroundColor(FLinearColor InValue) {
}

void UAudioSliderBase::SetValueTextReadOnly(const bool bIsReadOnly) {
}

void UAudioSliderBase::SetUnitsTextReadOnly(const bool bIsReadOnly) {
}

void UAudioSliderBase::SetUnitsText(const FText Units) {
}

void UAudioSliderBase::SetTextLabelBackgroundColor(FSlateColor InColor) {
}

void UAudioSliderBase::SetSliderThumbColor(FLinearColor InValue) {
}

void UAudioSliderBase::SetSliderBarColor(FLinearColor InValue) {
}

void UAudioSliderBase::SetSliderBackgroundColor(FLinearColor InValue) {
}

void UAudioSliderBase::SetShowUnitsText(const bool bShowUnitsText) {
}

void UAudioSliderBase::SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover) {
}

float UAudioSliderBase::GetSliderValue(const float OutputValue) {
    return 0.0f;
}

float UAudioSliderBase::GetOutputValue(const float InSliderValue) {
    return 0.0f;
}

float UAudioSliderBase::GetLinValue(const float OutputValue) {
    return 0.0f;
}


