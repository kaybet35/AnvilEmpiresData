#include "TownCenterWindow.h"

UTownCenterWindow::UTownCenterWindow() {
    this->PledgedPlayerList = NULL;
    this->LocalPlayerStatus = NULL;
    this->CivicPledgePanel = NULL;
    this->PledgedHeader = NULL;
    this->RareResourceStatus = NULL;
    this->ReserveInventoryHeaderContainer = NULL;
    this->ReserveInventorySubHeaderContainer = NULL;
    this->ReserveInventoryMainAreaContainer = NULL;
    this->ReserveInventoryContainerWidget = NULL;
    this->PublicInventoryCheckBox = NULL;
    this->PublicInventorySubmitImage = NULL;
    this->ReserveInventoryCheckBox = NULL;
    this->IncreaseTownStatusButton = NULL;
}

void UTownCenterWindow::OnReserveInventoryChecked(bool bIsChecked) {
}

void UTownCenterWindow::OnPublicInventoryChecked(bool bIsChecked) {
}

void UTownCenterWindow::OnIncreaseTownStatusButtonClicked() {
}

ESlateVisibility UTownCenterWindow::GetPublicInventoryCheckBoxVisibility() {
    return ESlateVisibility::Visible;
}


