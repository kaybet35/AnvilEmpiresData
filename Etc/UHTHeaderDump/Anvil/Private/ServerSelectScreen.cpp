#include "ServerSelectScreen.h"

UServerSelectScreen::UServerSelectScreen() {
    this->ServerList = NULL;
    this->RefreshButton = NULL;
    this->Throbber = NULL;
}

void UServerSelectScreen::OnRefreshButtonClicked() {
}

bool UServerSelectScreen::IsRefreshButtonEnabled() {
    return false;
}

ESlateVisibility UServerSelectScreen::GetThrobberVisibility() {
    return ESlateVisibility::Visible;
}


