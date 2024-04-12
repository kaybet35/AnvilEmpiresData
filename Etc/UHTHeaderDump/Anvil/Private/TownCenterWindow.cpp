#include "TownCenterWindow.h"

UTownCenterWindow::UTownCenterWindow() {
    this->PledgedPlayerList = NULL;
    this->LocalPlayerStatus = NULL;
    this->LocalPlayerStatusProgress = NULL;
    this->CivicPledgePanel = NULL;
    this->TechHeaderContainer = NULL;
    this->PledgedHeader = NULL;
    this->TechFooterContainer = NULL;
    this->TechProgress = NULL;
    this->RareResourceStatus = NULL;
    this->ReserveInventoryHeaderContainer = NULL;
    this->ReserveInventorySubHeaderContainer = NULL;
    this->ReserveInventoryMainAreaContainer = NULL;
    this->ReserveInventoryContainerWidget = NULL;
    this->PublicInventoryCheckBox = NULL;
    this->PublicInventorySubmitImage = NULL;
    this->ReserveInventoryCheckBox = NULL;
}

void UTownCenterWindow::OnReserveInventoryChecked(bool bIsChecked) {
}

void UTownCenterWindow::OnPublicInventoryChecked(bool bIsChecked) {
}

ESlateVisibility UTownCenterWindow::GetPublicInventoryCheckBoxVisibility() {
    return ESlateVisibility::Visible;
}


