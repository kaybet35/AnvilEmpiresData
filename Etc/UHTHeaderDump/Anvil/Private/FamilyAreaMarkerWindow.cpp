#include "FamilyAreaMarkerWindow.h"

UFamilyAreaMarkerWindow::UFamilyAreaMarkerWindow() {
    this->FamilyMembersScrollBox = NULL;
    this->FamilyMemberListItemWidgetType = NULL;
    this->FamilyAreaRestrictedCheckBox = NULL;
}

void UFamilyAreaMarkerWindow::OnFamilyAreaRestrictedChecked(bool bIsChecked) {
}

ESlateVisibility UFamilyAreaMarkerWindow::GetFamilyAreaRestrictedVisibility() {
    return ESlateVisibility::Visible;
}

ECheckBoxState UFamilyAreaMarkerWindow::GetFamilyAreaRestrictedCheckedState() {
    return ECheckBoxState::Unchecked;
}


