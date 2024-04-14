#include "MapIcon.h"

UMapIcon::UMapIcon() {
    this->Marker = NULL;
    this->LabelBox = NULL;
    this->IconBox = NULL;
}

bool UMapIcon::IsIconEnabled() {
    return false;
}

ESlateVisibility UMapIcon::GetIconVisibility() {
    return ESlateVisibility::Visible;
}


