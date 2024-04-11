#include "ConnectScreen.h"

UConnectScreen::UConnectScreen() {
    this->BackButton = NULL;
    this->RefreshButton = NULL;
    this->ConnectButton = NULL;
    this->DownloadingThrobber = NULL;
    this->NameValidationMessageText = NULL;
}

void UConnectScreen::OnRefreshButtonClicked() {
}

void UConnectScreen::OnConnectButtonClicked() {
}

void UConnectScreen::OnBackButtonClicked() {
}

bool UConnectScreen::IsRefreshButtonEnabled() {
    return false;
}

bool UConnectScreen::IsConnectButtonEnabled() {
    return false;
}

bool UConnectScreen::IsBackButtonEnabled() {
    return false;
}

ESlateVisibility UConnectScreen::GetThrobberVisibility() {
    return ESlateVisibility::Visible;
}


