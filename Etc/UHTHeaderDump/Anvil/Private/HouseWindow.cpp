#include "HouseWindow.h"

UHouseWindow::UHouseWindow() {
    this->PlayerInventoriesBox = NULL;
    this->HouseAreaRestrictedCheckBox = NULL;
}

void UHouseWindow::OnHouseAreaRestrictedChecked(bool bIsChecked) {
}

ESlateVisibility UHouseWindow::GetHouseAreaRestrictedVisibility() {
    return ESlateVisibility::Visible;
}

ECheckBoxState UHouseWindow::GetHouseAreaRestrictedCheckedState() {
    return ECheckBoxState::Unchecked;
}


