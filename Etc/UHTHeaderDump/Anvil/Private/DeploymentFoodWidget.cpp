#include "DeploymentFoodWidget.h"

UDeploymentFoodWidget::UDeploymentFoodWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TooltipImage = NULL;
    this->DeploymentFoodItemGridWidget = NULL;
    this->DeploymentUnavailableText = NULL;
    this->CancelButton = NULL;
    this->ParentDeploymentScreen = NULL;
}

void UDeploymentFoodWidget::OnCancelButtonClicked() {
}


