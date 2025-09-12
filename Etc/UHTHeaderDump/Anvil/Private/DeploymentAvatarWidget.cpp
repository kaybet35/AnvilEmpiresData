#include "DeploymentAvatarWidget.h"

UDeploymentAvatarWidget::UDeploymentAvatarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DebugText = NULL;
}

void UDeploymentAvatarWidget::OnDataUpdated(const FDeploymentAvatarUserData& UserData) {
}


