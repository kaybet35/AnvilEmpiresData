#include "FamilyInviteDialogPlayerListEntryWidget.h"

UFamilyInviteDialogPlayerListEntryWidget::UFamilyInviteDialogPlayerListEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerNameText = NULL;
    this->InviteButton = NULL;
}

void UFamilyInviteDialogPlayerListEntryWidget::OnInviteClicked() {
}

FText UFamilyInviteDialogPlayerListEntryWidget::GetPlayerNameText() {
    return FText::GetEmpty();
}


