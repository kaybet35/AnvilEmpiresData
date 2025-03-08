#include "AdminPlayerListItemWidget.h"

UAdminPlayerListItemWidget::UAdminPlayerListItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NameBox = NULL;
    this->TeamBox = NULL;
    this->SteamIdBox = NULL;
    this->TeleportToButton = NULL;
    this->BanButton = NULL;
    this->SilverAllowanceText = NULL;
}

void UAdminPlayerListItemWidget::OnTeleportToClicked() {
}

void UAdminPlayerListItemWidget::OnBanClicked() {
}

void UAdminPlayerListItemWidget::CopySteamId() {
}


