#include "DeploymentScreen.h"

UDeploymentScreen::UDeploymentScreen() {
    this->MapWidget = NULL;
    this->LogoutButton = NULL;
    this->DeploymentInstructionOrSpawnTimerText = NULL;
}

void UDeploymentScreen::OnLogoutButtonClicked() {
}

FText UDeploymentScreen::GetDeploymentInstructionOrSpawnTimerText() {
    return FText::GetEmpty();
}


