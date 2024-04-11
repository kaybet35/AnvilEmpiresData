#include "MapIcon.h"

UMapIcon::UMapIcon() : UUserWidget(FObjectInitializer::Get()) {
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


