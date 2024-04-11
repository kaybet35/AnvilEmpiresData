#include "AnvilDialogBox.h"

UAnvilDialogBox::UAnvilDialogBox() : UUserWidget(FObjectInitializer::Get()) {
    this->HeaderText = NULL;
    this->BodyText = NULL;
    this->ComboBox = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
}

void UAnvilDialogBox::OnRightButtonClicked() {
}

void UAnvilDialogBox::OnLeftButtonClicked() {
}


