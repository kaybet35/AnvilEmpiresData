#include "HitConverterInput.h"

FHitConverterInput::FHitConverterInput() {
    this->InputCodeName = NULL;
    this->InputCodeNameVisVar = 0;
    this->OutputStackSize = 0;
    this->OutputStackSizeVisVar = 0;
    this->NumHitsToConvert = 0;
    this->bOutputScalesWithInputStackSize = false;
}

