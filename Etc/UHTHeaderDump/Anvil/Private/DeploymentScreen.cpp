#include "DeploymentScreen.h"

UDeploymentScreen::UDeploymentScreen() {
    this->MapWidget = NULL;
    this->Throbber = NULL;
    this->LogoutButton = NULL;
    this->ConnectingText = NULL;
    this->DeploymentInstructionOrSpawnTimerText = NULL;
}

void UDeploymentScreen::OnLogoutButtonClicked() {
}

ESlateVisibility UDeploymentScreen::GetThrobberVisibility() {
    return ESlateVisibility::Visible;
}

FText UDeploymentScreen::GetDeploymentInstructionOrSpawnTimerText() {
    return FText::GetEmpty();
}

ESlateVisibility UDeploymentScreen::GetConnectingTextVisibility() {
    return ESlateVisibility::Visible;
}


