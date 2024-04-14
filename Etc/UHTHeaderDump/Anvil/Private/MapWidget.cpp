#include "MapWidget.h"

UMapWidget::UMapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapSheet = NULL;
    this->TownHallIconCanvas = NULL;
    this->ZoomSpeed = 0.00f;
    this->ZoomMin = 0.00f;
    this->ZoomMax = 0.00f;
    this->ZoomAnimationTime = 0.00f;
    this->MapImageBox = NULL;
    this->FogOfWarMask = NULL;
    this->FogOfWarRadius = 5;
    this->DeploymentPointWidgetClass = NULL;
    this->DeploymentInstructionOrSpawnTimerBorder = NULL;
    this->DeploymentInstructionOrSpawnTimerText = NULL;
    this->ObjectiveBorder = NULL;
    this->LogoutButton = NULL;
    this->MapSheetSlot = NULL;
}

void UMapWidget::OnLogoutButtonClicked() {
}

ESlateVisibility UMapWidget::GetRespawnTimerVisibility() {
    return ESlateVisibility::Visible;
}

FText UMapWidget::GetRespawnTimerText() {
    return FText::GetEmpty();
}

ESlateVisibility UMapWidget::GetObjectiveBorderVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UMapWidget::GetLogoutButtonVisibility() {
    return ESlateVisibility::Visible;
}



