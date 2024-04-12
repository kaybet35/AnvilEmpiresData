#include "OpeningScreen.h"

UOpeningScreen::UOpeningScreen() {
    this->PlayButton = NULL;
    this->ExitButton = NULL;
    this->OptionsButton = NULL;
    this->RoadmapButton = NULL;
    this->Version = NULL;
    this->CL = NULL;
    this->RoadmapPopupButton = NULL;
    this->NextTestWidget = NULL;
    this->DisclaimerWidget = NULL;
    this->AnnouncementText = NULL;
    this->DiscordRoleButton = NULL;
}

void UOpeningScreen::ReenableDiscordRoleButton() {
}

void UOpeningScreen::OnRoadmapClicked() {
}

void UOpeningScreen::OnRoadmapButtonClicked() {
}

void UOpeningScreen::OnPlayButtonClicked() {
}

void UOpeningScreen::OnOptionsButtonClicked() {
}

void UOpeningScreen::OnExitButtonClicked() {
}

void UOpeningScreen::OnDiscordRoleButtonClicked() {
}

bool UOpeningScreen::IsDiscordRoleButtonEnabled() {
    return false;
}

FText UOpeningScreen::GetAnnouncementText() {
    return FText::GetEmpty();
}


