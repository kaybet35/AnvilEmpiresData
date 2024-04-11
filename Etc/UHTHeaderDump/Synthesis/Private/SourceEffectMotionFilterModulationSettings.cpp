#include "SourceEffectMotionFilterModulationSettings.h"

FSourceEffectMotionFilterModulationSettings::FSourceEffectMotionFilterModulationSettings() {
    this->ModulationSource = ESourceEffectMotionFilterModSource::DistanceFromListener;
    this->UpdateEaseMS = 0.00f;
}

