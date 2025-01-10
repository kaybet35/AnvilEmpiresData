#include "DeploymentPointMapIcon.h"

UDeploymentPointMapIcon::UDeploymentPointMapIcon() {
    this->MapItemButton = NULL;
    this->FlashingFrequency = 2.00f;
    this->FlashingMinOpacity = 0.20f;
}

void UDeploymentPointMapIcon::OnDeploymentPointClicked() {
}

bool UDeploymentPointMapIcon::IsDeploymentPointEnabled() {
    return false;
}

ESlateVisibility UDeploymentPointMapIcon::GetDeploymentPointVisibility() {
    return ESlateVisibility::Visible;
}


