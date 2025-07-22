#include "TownCenterMapIcon.h"

UTownCenterMapIcon::UTownCenterMapIcon() {
    this->TownCenter = NULL;
    this->IconSizeBox = NULL;
    this->IconButton = NULL;
    this->TownName = NULL;
    this->TownNameBorder = NULL;
    this->TownStatusBorder = NULL;
    this->NumPledgedStatus = NULL;
    this->NumTentsStatus = NULL;
    this->NumReinforcementSuppliesStatus = NULL;
}

void UTownCenterMapIcon::UpdateName() {
}

FText UTownCenterMapIcon::GetNumTentsText() {
    return FText::GetEmpty();
}

FText UTownCenterMapIcon::GetNumReinforcementSuppliesText() {
    return FText::GetEmpty();
}

FText UTownCenterMapIcon::GetNumPledgedText() {
    return FText::GetEmpty();
}


