#include "TargetChainFKSettings.h"

FTargetChainFKSettings::FTargetChainFKSettings() {
    this->EnableFK = false;
    this->RotationMode = ERetargetRotationMode::Interpolated;
    this->RotationAlpha = 0.00f;
    this->TranslationMode = ERetargetTranslationMode::None;
    this->TranslationAlpha = 0.00f;
    this->PoleVectorMatching = 0.00f;
    this->PoleVectorOffset = 0.00f;
}

