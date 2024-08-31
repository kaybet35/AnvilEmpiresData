#include "DeploymentScreen.h"

UDeploymentScreen::UDeploymentScreen() {
    this->MapWidget = NULL;
    this->LogoutButton = NULL;
    this->DeploymentInstructionOrSpawnTimerText = NULL;
    this->DeploymentFoodWidget = NULL;
}

void UDeploymentScreen::OnLogoutButtonClicked() {
}

FText UDeploymentScreen::GetDeploymentInstructionOrSpawnTimerText() {
    return FText::GetEmpty();
}


