#include "FamilyAreaMarkerWindow.h"

UFamilyAreaMarkerWindow::UFamilyAreaMarkerWindow() {
    this->FamilyMemberListItemWidgetType = NULL;
    this->FamilyMembersScrollBox = NULL;
    this->AlliedFamiliesScrollBox = NULL;
    this->UpkeepIcon = NULL;
    this->UpkeepTextBlock = NULL;
    this->FamilyAreaRestrictedCheckBox = NULL;
    this->FamilyAreaAllianceButton = NULL;
    this->FamilyInviteDialogWidget = NULL;
    this->AvatarGroupHeader = NULL;
    this->AvatarGroupWidget = NULL;
}

void UFamilyAreaMarkerWindow::OnRemoveAlliedFamilyClicked(const uint64 AlliedFamilyFounderOnlineId) {
}

void UFamilyAreaMarkerWindow::OnKickMemberClicked(const uint64 PlayerId) {
}

void UFamilyAreaMarkerWindow::OnFamilyAreaSetAllianceClicked() {
}

void UFamilyAreaMarkerWindow::OnFamilyAreaRestrictedChecked(bool bIsChecked) {
}

bool UFamilyAreaMarkerWindow::IsFamilyAreaSetAllianceButtonEnabled() {
    return false;
}

bool UFamilyAreaMarkerWindow::IsFamilyAreaRestrictedCheckBoxEnabled() {
    return false;
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


