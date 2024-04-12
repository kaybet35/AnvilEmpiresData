#include "FactionSelectScreen.h"

UFactionSelectScreen::UFactionSelectScreen() {
    this->FactionAranicButton = NULL;
    this->FactionMirrishButton = NULL;
    this->FactionNovanButton = NULL;
    this->DeleteProfileButton = NULL;
    this->FactionAranicAtCapacityText = NULL;
    this->FactionMirrishAtCapacityText = NULL;
    this->FactionNovanAtCapacityText = NULL;
    this->DownloadingThrobber = NULL;
    this->ServerBrowserCheckBox = NULL;
    this->ServerBrowserHorizontalBox = NULL;
}

void UFactionSelectScreen::OnFactionNovanButtonClicked() {
}

void UFactionSelectScreen::OnFactionMirrishButtonClicked() {
}

void UFactionSelectScreen::OnFactionAranicButtonClicked() {
}

void UFactionSelectScreen::OnDeleteProfileButtonClicked() {
}

bool UFactionSelectScreen::IsFactionNovanButtonEnabled() {
    return false;
}

bool UFactionSelectScreen::IsFactionMirrishButtonEnabled() {
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

ESlateVisibility UFactionSelectScreen::GetServerBrowserCheckBoxVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFactionSelectScreen::GetDeleteProfileButtonVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFactionSelectScreen::FactionNovanAtCapacityVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFactionSelectScreen::FactionMirrishAtCapacityVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UFactionSelectScreen::FactionAranicAtCapacityVisibility() {
    return ESlateVisibility::Visible;
}


