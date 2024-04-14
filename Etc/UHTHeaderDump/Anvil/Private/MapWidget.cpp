#include "MapWidget.h"

UMapWidget::UMapWidget() {
    this->FogOfWarMask = NULL;
    this->FogOfWarRadius = 5;
    this->DeploymentInstructionOrSpawnTimerBorder = NULL;
    this->DeploymentInstructionOrSpawnTimerText = NULL;
    this->ObjectiveBorder = NULL;
    this->LogoutButton = NULL;
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



