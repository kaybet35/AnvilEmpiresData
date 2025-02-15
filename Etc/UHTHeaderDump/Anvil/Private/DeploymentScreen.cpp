#include "DeploymentScreen.h"

UDeploymentScreen::UDeploymentScreen() {
    this->MapWidget = NULL;
    this->LogoutButton = NULL;
    this->DeploymentInstructionOrSpawnTimerText = NULL;
    this->DeploymentFoodWidget = NULL;
    this->FamilyCenterDeployButton = NULL;
    this->FamilyCenterDeployWidget = NULL;
}

void UDeploymentScreen::OnLogoutButtonClicked() {
}

void UDeploymentScreen::OnFamilyCenterDeployButtonClicked() {
}

ESlateVisibility UDeploymentScreen::GetFamilyCenterDeployWidgetVisibility() {
    return ESlateVisibility::Visible;
}

FText UDeploymentScreen::GetDeploymentInstructionOrSpawnTimerText() {
    return FText::GetEmpty();
}


