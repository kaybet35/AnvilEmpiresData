#include "InputAlphaBoolBlend.h"

FInputAlphaBoolBlend::FInputAlphaBoolBlend() {
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->bInitialized = false;
    this->CustomCurve = NULL;
}

