#include "PlayerInventoryWidget.h"

UPlayerInventoryWidget::UPlayerInventoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerInventory = NULL;
    this->Header = NULL;
    this->bShowAvatarSubmitButton = false;
    this->SubmitAvatarButton = NULL;
    this->AvatarHeader = NULL;
    this->AvatarImage = NULL;
    this->AvatarQualityImage = NULL;
    this->AvatarNameText = NULL;
    this->AvatarDescriptionText = NULL;
}

void UPlayerInventoryWidget::OnSubmitAvatarClicked() {
}

bool UPlayerInventoryWidget::IsSubmitAvatarButtonEnabled() {
    return false;
}


