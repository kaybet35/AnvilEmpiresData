#include "FamilyMemberListItemWidget.h"

UFamilyMemberListItemWidget::UFamilyMemberListItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerNameText = NULL;
    this->RoleComboBoxSizeBox = NULL;
    this->RoleComboBox = NULL;
    this->RoleTextSizeBox = NULL;
    this->RoleTextBlock = NULL;
    this->KickButton = NULL;
}

void UFamilyMemberListItemWidget::OnKickButtonClicked() {
}

void UFamilyMemberListItemWidget::OnFamilyRoleSelectionChanged(const FString& SelectedItem, const TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

ESlateVisibility UFamilyMemberListItemWidget::GetRoleTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UFamilyMemberListItemWidget::GetRoleText() {
    return FText::GetEmpty();
}

ESlateVisibility UFamilyMemberListItemWidget::GetRoleComboBoxVisibility() {
    return ESlateVisibility::Visible;
}

FText UFamilyMemberListItemWidget::GetPlayerNameText() {
    return FText::GetEmpty();
}

ESlateVisibility UFamilyMemberListItemWidget::GetKickButtonVisibility() {
    return ESlateVisibility::Visible;
}


