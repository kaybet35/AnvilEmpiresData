#include "AlertWidget.h"

UAlertWidget::UAlertWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AlertTextBlock = NULL;
    this->AcceptButtonBox = NULL;
    this->AcceptButton = NULL;
    this->DeclineButtonBox = NULL;
    this->DeclineButton = NULL;
}

void UAlertWidget::OnDeclineClicked() {
}

void UAlertWidget::OnAcceptClicked() {
}


