#include "DeploymentScreen.h"

UDeploymentScreen::UDeploymentScreen() {
    this->MapWidget = NULL;
    this->Throbber = NULL;
    this->LogoutButton = NULL;
    this->RefreshButton = NULL;
    this->ConnectingText = NULL;
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

ESlateVisibility UDeploymentScreen::GetConnectingTextVisibility() {
    return ESlateVisibility::Visible;
}


