#include "WorldTownCenterMapIcon.h"

UWorldTownCenterMapIcon::UWorldTownCenterMapIcon() {
    this->MainElements = NULL;
    this->TownStatusVerticalBox = NULL;
    this->TownNameBorder = NULL;
    this->TownNameText = NULL;
    this->TownStatusBorder = NULL;
    this->NumPledgedStatus = NULL;
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

ESlateVisibility UWorldTownCenterMapIcon::GetNumPledgedVisibility() {
    return ESlateVisibility::Visible;
}

FText UWorldTownCenterMapIcon::GetNumPledgedText() {
    return FText::GetEmpty();
}


