#include "ComboBoxKey.h"

UComboBoxKey::UComboBoxKey() {
    this->MaxListHeight = 450.00f;
    this->bHasDownArrow = true;
    this->bEnableGamepadNavigationMode = true;
    this->bIsFocusable = true;
}

void UComboBoxKey::SetSelectedOption(FName Option) {
}

bool UComboBoxKey::RemoveOption(FName Option) {
    return false;
}

bool UComboBoxKey::IsOpen() const {
    return false;
}

FName UComboBoxKey::GetSelectedOption() const {
    return NAME_None;
}

void UComboBoxKey::ClearSelection() {
}

void UComboBoxKey::ClearOptions() {
}

void UComboBoxKey::AddOption(FName Option) {
}


