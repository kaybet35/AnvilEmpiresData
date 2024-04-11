#include "DisclaimerWidget.h"

UDisclaimerWidget::UDisclaimerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DisclaimerCheckBox1 = NULL;
    this->DisclaimerCheckBox2 = NULL;
    this->DisclaimerCheckBox3 = NULL;
    this->DisclaimerCheckBox4 = NULL;
    this->AcceptTextBox = NULL;
    this->CancelButton = NULL;
    this->ConfirmButton = NULL;
}

void UDisclaimerWidget::OnConfirmButtonClicked() {
}

void UDisclaimerWidget::OnCancelButtonClicked() {
}

bool UDisclaimerWidget::IsConfirmButtonEnabled() {
    return false;
}

bool UDisclaimerWidget::IsAcceptTextBoxEnabled() {
    return false;
}


