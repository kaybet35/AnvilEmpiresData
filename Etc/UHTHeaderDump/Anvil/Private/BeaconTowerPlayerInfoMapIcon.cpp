#include "BeaconTowerPlayerInfoMapIcon.h"

UBeaconTowerPlayerInfoMapIcon::UBeaconTowerPlayerInfoMapIcon() {
    this->LocationText = NULL;
}

ESlateVisibility UBeaconTowerPlayerInfoMapIcon::GetLocationTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UBeaconTowerPlayerInfoMapIcon::GetLocationText() {
    return FText::GetEmpty();
}


