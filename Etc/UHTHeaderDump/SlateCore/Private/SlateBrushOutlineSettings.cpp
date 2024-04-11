#include "SlateBrushOutlineSettings.h"

FSlateBrushOutlineSettings::FSlateBrushOutlineSettings() {
    this->Width = 0.00f;
    this->RoundingType = ESlateBrushRoundingType::FixedRadius;
    this->bUseBrushTransparency = false;
}

