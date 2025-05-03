#include "FactionSelectScreen.h"

UFactionSelectScreen::UFactionSelectScreen() {
    this->FactionAranicButton = NULL;
    this->AranicAtCapacityText = NULL;
    this->FactionMirrishButton = NULL;
    this->MirrishAtCapacityText = NULL;
    this->FactionNovanButton = NULL;
    this->NovanAtCapacityText = NULL;
    this->DeleteProfileButton = NULL;
    this->DownloadingThrobber = NULL;
    this->ServerBrowserCheckBox = NULL;
    this->ServerBrowserHorizontalBox = NULL;
    this->EditorSpawnCheckBox = NULL;
    this->EditorSpawnHorizontalBox = NULL;
    this->FactionSelectSwitcher = NULL;
    this->FactionLockedSwitcher = NULL;
    this->FactionLockedAranicButton = NULL;
    this->FactionLockedMirrishButton = NULL;
    this->FactionLockedNovanButton = NULL;
}

void UFactionSelectScreen::OnSelectedFactionButtonClicked() {
}

void UFactionSelectScreen::OnFactionNovanButtonClicked() {
}

void UFactionSelectScreen::OnFactionMirrishButtonClicked() {
}

void UFactionSelectScreen::OnFactionAranicButtonClicked() {
}

void UFactionSelectScreen::OnDeleteProfileButtonClicked() {
}

bool UFactionSelectScreen::IsSelectedFactionButtonEnabled() {
    return false;
}

bool UFactionSelectScreen::IsFactionAranicButtonEnabled() {
    return false;
}

bool UFactionSelectScreen::IsDeleteProfileButtonEnabled() {
    return false;
}

ESlateVisibility UFactionSelectScreen::GetThrobberVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFactionSelectScreen::GetDevModeWidgetVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFactionSelectScreen::GetDeleteProfileButtonVisibility() {
    return ESlateVisibility::Visible;
}


