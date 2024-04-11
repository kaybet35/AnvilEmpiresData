#include "RadialSlider.h"

URadialSlider::URadialSlider() {
    this->Value = 0.00f;
    this->bUseCustomDefaultValue = false;
    this->CustomDefaultValue = 0.00f;
    this->SliderHandleStartAngle = 60.00f;
    this->SliderHandleEndAngle = 300.00f;
    this->AngularOffset = 0.00f;
    this->Locked = false;
    this->MouseUsesStep = false;
    this->RequiresControllerLock = true;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
    this->UseVerticalDrag = false;
    this->ShowSliderHandle = true;
    this->ShowSliderHand = false;
}

void URadialSlider::SetValueTags(const TArray<float>& InValueTags) {
}

void URadialSlider::SetValue(float InValue) {
}

void URadialSlider::SetUseVerticalDrag(bool InUseVerticalDrag) {
}

void URadialSlider::SetStepSize(float InValue) {
}

void URadialSlider::SetSliderRange(const FRuntimeFloatCurve& InSliderRange) {
}

void URadialSlider::SetSliderProgressColor(FLinearColor InValue) {
}

void URadialSlider::SetSliderHandleStartAngle(float InValue) {
}

void URadialSlider::SetSliderHandleEndAngle(float InValue) {
}

void URadialSlider::SetSliderHandleColor(FLinearColor InValue) {
}

void URadialSlider::SetSliderBarColor(FLinearColor InValue) {
}

void URadialSlider::SetShowSliderHandle(bool InShowSliderHandle) {
}

void URadialSlider::SetShowSliderHand(bool InShowSliderHand) {
}

void URadialSlider::SetLocked(bool InValue) {
}

void URadialSlider::SetHandStartEndRatio(FVector2D InValue) {
}

void URadialSlider::SetCustomDefaultValue(float InValue) {
}

void URadialSlider::SetCenterBackgroundColor(FLinearColor InValue) {
}

void URadialSlider::SetAngularOffset(float InValue) {
}

float URadialSlider::GetValue() const {
    return 0.0f;
}

float URadialSlider::GetNormalizedSliderHandlePosition() const {
    return 0.0f;
}

float URadialSlider::GetCustomDefaultValue() const {
    return 0.0f;
}


