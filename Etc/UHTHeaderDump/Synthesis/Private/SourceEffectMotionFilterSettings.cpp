#include "SourceEffectMotionFilterSettings.h"

FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings() {
    this->MotionFilterTopology = ESourceEffectMotionFilterTopology::SerialMode;
    this->MotionFilterMix = 0.00f;
    this->DryVolumeDb = 0.00f;
}

