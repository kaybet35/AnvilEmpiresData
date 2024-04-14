#include "DeploymentPointMapIcon.h"

UDeploymentPointMapIcon::UDeploymentPointMapIcon() {
    this->MapItemButton = NULL;
}

void UDeploymentPointMapIcon::OnDeploymentPointClicked() {
}

bool UDeploymentPointMapIcon::IsDeploymentPointEnabled() {
    return false;
}

ESlateVisibility UDeploymentPointMapIcon::GetDeploymentPointVisibility() {
    return ESlateVisibility::Visible;
}


