#include "AdminScreen.h"

UAdminScreen::UAdminScreen() {
    this->PlayerListView = NULL;
    this->SortByNameButton = NULL;
    this->SortByDistanceButton = NULL;
    this->ReloadButton = NULL;
    this->SearchBox = NULL;
}

void UAdminScreen::ReloadList() {
}

void UAdminScreen::OnSortByName() {
}

void UAdminScreen::OnSortByDistance() {
}

void UAdminScreen::OnSearch(const FText& Text, TEnumAsByte<ETextCommit::Type> Method) {
}


