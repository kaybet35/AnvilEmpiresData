#include "CheckBox.h"

UCheckBox::UCheckBox() {
    this->CheckedState = ECheckBoxState::Unchecked;
    this->HorizontalAlignment = HAlign_Fill;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
}

void UCheckBox::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UCheckBox::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UCheckBox::SetIsChecked(bool InIsChecked) {
}

void UCheckBox::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
}

bool UCheckBox::IsPressed() const {
    return false;
}

bool UCheckBox::IsChecked() const {
    return false;
}

ECheckBoxState UCheckBox::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}


