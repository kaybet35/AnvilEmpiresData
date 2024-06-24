#include "WorldTownCenterMapIcon.h"

UWorldTownCenterMapIcon::UWorldTownCenterMapIcon() {
    this->IconNudgeBox = NULL;
    this->MainElements = NULL;
    this->TownStatusVerticalBox = NULL;
    this->TownNameBorder = NULL;
    this->TownNameText = NULL;
    this->TownStatusBorder = NULL;
    this->NumHousesStatus = NULL;
    this->NumTentsStatus = NULL;
    this->NumReinforcementSuppliesStatus = NULL;
    this->TownWarningText = NULL;
    this->DetectionRangeCircle = NULL;
    this->FlashingFrequency = 0.00f;
    this->FlashingMinOpacity = 0.00f;
}

ESlateVisibility UWorldTownCenterMapIcon::GetTownWarningTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UWorldTownCenterMapIcon::GetTownWarningText() {
    return FText::GetEmpty();
}

ESlateVisibility UWorldTownCenterMapIcon::GetTownStatusBorderVisibility() {
    return ESlateVisibility::Visible;
}

FText UWorldTownCenterMapIcon::GetTownNameText() {
    return FText::GetEmpty();
}

ESlateVisibility UWorldTownCenterMapIcon::GetTownNameBorderVisibility() {
    return ESlateVisibility::Visible;
}

FText UWorldTownCenterMapIcon::GetNumTentsText() {
    return FText::GetEmpty();
}

FText UWorldTownCenterMapIcon::GetNumReinforcementSuppliesText() {
    return FText::GetEmpty();
}

ESlateVisibility UWorldTownCenterMapIcon::GetNumHousesVisibility() {
    return ESlateVisibility::Visible;
}

FText UWorldTownCenterMapIcon::GetNumHousesText() {
    return FText::GetEmpty();
}


