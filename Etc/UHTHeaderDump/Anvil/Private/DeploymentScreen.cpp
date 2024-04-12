#include "DeploymentScreen.h"

UDeploymentScreen::UDeploymentScreen() {
    this->MapWidget = NULL;
    this->Throbber = NULL;
    this->LogoutButton = NULL;
    this->RefreshButton = NULL;
}

void UDeploymentScreen::OnRefreshButtonClicked() {
}

void UDeploymentScreen::OnLogoutButtonClicked() {
}

bool UDeploymentScreen::IsRefreshButtonEnabled() {
    return false;
}

ESlateVisibility UDeploymentScreen::GetThrobberVisibility() {
    return ESlateVisibility::Visible;
}


