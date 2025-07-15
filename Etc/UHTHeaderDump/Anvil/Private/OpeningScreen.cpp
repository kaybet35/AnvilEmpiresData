#include "OpeningScreen.h"

UOpeningScreen::UOpeningScreen() {
    this->PlayButton = NULL;
    this->ExitButton = NULL;
    this->OptionsButton = NULL;
    this->VersionText = NULL;
    this->CLText = NULL;
    this->NextTestWidget = NULL;
    this->DisclaimerWidget = NULL;
    this->AnnouncementText = NULL;
    this->DiscordRoleButton = NULL;
    this->DevModeButton = NULL;
    this->SelectedShardText = NULL;
    this->ShardSelectorButton = NULL;
}

void UOpeningScreen::UpdateVersionText() {
}

void UOpeningScreen::ReenableDiscordRoleButton() {
}

void UOpeningScreen::OnShardSelectorButtonClicked() {
}

void UOpeningScreen::OnPlayButtonClicked() {
}

void UOpeningScreen::OnOptionsButtonClicked() {
}

void UOpeningScreen::OnExitButtonClicked() {
}

void UOpeningScreen::OnDiscordRoleButtonClicked() {
}

void UOpeningScreen::OnDevModeButtonClicked() {
}

bool UOpeningScreen::IsDiscordRoleButtonEnabled() {
    return false;
}

FText UOpeningScreen::GetSelectedShardText() {
    return FText::GetEmpty();
}

FText UOpeningScreen::GetAnnouncementText() {
    return FText::GetEmpty();
}


