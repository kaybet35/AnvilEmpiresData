#include "PlayerAvatarWidget.h"

UPlayerAvatarWidget::UPlayerAvatarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AvatarImage = NULL;
    this->VitalityStatus = NULL;
    this->NameText = NULL;
    this->FitnessNumberText = NULL;
    this->CombatNumberText = NULL;
    this->SmithingNumberText = NULL;
    this->LumberjackingNumberText = NULL;
    this->MiningNumberText = NULL;
    this->FarmingNumberText = NULL;
    this->ChangeAvatarButton = NULL;
}

void UPlayerAvatarWidget::OnChangeAvatarButtonClicked() {
}


