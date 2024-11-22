#include "FamilyInviteDialogWidget.h"

UFamilyInviteDialogWidget::UFamilyInviteDialogWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerListEntryWidgetType = NULL;
    this->PlayerListScrollBox = NULL;
    this->CloseButton = NULL;
}

void UFamilyInviteDialogWidget::OnCloseButtonClicked() {
}


