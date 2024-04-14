#include "FamilyAreaMarkerWindow.h"

UFamilyAreaMarkerWindow::UFamilyAreaMarkerWindow() {
    this->FamilyMembersScrollBox = NULL;
    this->TaxIcon = NULL;
    this->TaxTextBlock = NULL;
    this->FamilyMemberListItemWidgetType = NULL;
    this->FamilyAreaRestrictedCheckBox = NULL;
    this->FamilyAreaAllianceButton = NULL;
}

void UFamilyAreaMarkerWindow::OnKickClicked(uint64 PlayerId) {
}

void UFamilyAreaMarkerWindow::OnFamilyAreaSetAllianceClicked() {
}

void UFamilyAreaMarkerWindow::OnFamilyAreaRestrictedChecked(bool bIsChecked) {
}

ESlateVisibility UFamilyAreaMarkerWindow::GetFamilyAreaSetAllianceVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFamilyAreaMarkerWindow::GetFamilyAreaRestrictedVisibility() {
    return ESlateVisibility::Visible;
}

ECheckBoxState UFamilyAreaMarkerWindow::GetFamilyAreaRestrictedCheckedState() {
    return ECheckBoxState::Unchecked;
}


