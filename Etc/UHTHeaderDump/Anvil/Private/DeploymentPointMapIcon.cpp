#include "DeploymentPointMapIcon.h"

UDeploymentPointMapIcon::UDeploymentPointMapIcon() {
    this->MapItemButton = NULL;
    this->FlashingFrequency = 0.00f;
    this->FlashingMinOpacity = 0.00f;
}

void UDeploymentPointMapIcon::OnDeploymentPointClicked() {
}

bool UDeploymentPointMapIcon::IsDeploymentPointEnabled() {
    return false;
}

ESlateVisibility UDeploymentPointMapIcon::GetDeploymentPointVisibility() {
    return ESlateVisibility::Visible;
}


