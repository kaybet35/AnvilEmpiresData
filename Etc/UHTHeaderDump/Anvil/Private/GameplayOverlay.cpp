#include "GameplayOverlay.h"

UGameplayOverlay::UGameplayOverlay() : UUserWidget(FObjectInitializer::Get()) {
    this->ChatWidget = NULL;
    this->NotificationText = NULL;
    this->SecondaryNotificationText = NULL;
    this->PrimaryPromptText = NULL;
    this->SecondaryPromptText = NULL;
}

ESlateVisibility UGameplayOverlay::GetHUDWidgetVisibility() {
    return ESlateVisibility::Visible;
}


