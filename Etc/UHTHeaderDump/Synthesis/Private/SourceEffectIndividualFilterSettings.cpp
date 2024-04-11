#include "SourceEffectIndividualFilterSettings.h"

FSourceEffectIndividualFilterSettings::FSourceEffectIndividualFilterSettings() {
    this->FilterCircuit = ESourceEffectMotionFilterCircuit::OnePole;
    this->FilterType = ESourceEffectMotionFilterType::LowPass;
    this->CutoffFrequency = 0.00f;
    this->FilterQ = 0.00f;
}

