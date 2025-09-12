#include "GameplayOverlay.h"

UGameplayOverlay::UGameplayOverlay() : UUserWidget(FObjectInitializer::Get()) {
    this->AlertsContainerWidget = NULL;
    this->ChatWidget = NULL;
    this->NotificationText = NULL;
    this->SecondaryNotificationText = NULL;
    this->PrimaryPromptText = NULL;
    this->SecondaryPromptText = NULL;
    this->VictoryBackground = NULL;
    this->AgeEndingBackground = NULL;
    this->PostAgeEndingBackground = NULL;
    this->AranicLogo = NULL;
    this->MirrishLogo = NULL;
    this->NovanLogo = NULL;
    this->MilitaryVictoryLogo = NULL;
    this->CultureVictoryLogo = NULL;
    this->ReligiousVictoryLogo = NULL;
    this->VictorySoundCue = NULL;
    this->AgeEndingSoundCue = NULL;
    this->WinConditionCanvas = NULL;
    this->WinConditionBackground = NULL;
    this->WinConditionLogo = NULL;
    this->VictoryTypeLogo = NULL;
}


ESlateVisibility UGameplayOverlay::GetHUDWidgetVisibility() {
    return ESlateVisibility::Visible;
}


