#include "DeploymentPointWidget.h"

UDeploymentPointWidget::UDeploymentPointWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapItemButton = NULL;
    this->MapItemImage = NULL;
    this->TownStatusVerticalBox = NULL;
    this->TownNameBorder = NULL;
    this->TownNameText = NULL;
    this->TownStatusBorder = NULL;
    this->NumHousesStatus = NULL;
    this->NumTentsStatus = NULL;
    this->NumReinforcementSuppliesStatus = NULL;
    this->ParentMapWidget = NULL;
    this->ParentSlot = NULL;
}

void UDeploymentPointWidget::OnDeploymentPointClicked() {
}

bool UDeploymentPointWidget::IsDeploymentPointEnabled() {
    return false;
}

ESlateVisibility UDeploymentPointWidget::GetTownStatusVerticalBoxVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UDeploymentPointWidget::GetTownStatusBorderVisibility() {
    return ESlateVisibility::Visible;
}

FText UDeploymentPointWidget::GetTownNameText() {
    return FText::GetEmpty();
}

ESlateVisibility UDeploymentPointWidget::GetTownNameBorderVisibility() {
    return ESlateVisibility::Visible;
}

FText UDeploymentPointWidget::GetNumTentsText() {
    return FText::GetEmpty();
}

FText UDeploymentPointWidget::GetNumReinforcementSuppliesText() {
    return FText::GetEmpty();
}

FText UDeploymentPointWidget::GetNumHousesText() {
    return FText::GetEmpty();
}

ESlateVisibility UDeploymentPointWidget::GetDeploymentPointVisibility() {
    return ESlateVisibility::Visible;
}


