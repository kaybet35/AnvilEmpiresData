#include "RigUnit_ChainHarmonics_Wave.h"

FRigUnit_ChainHarmonics_Wave::FRigUnit_ChainHarmonics_Wave() {
    this->bEnabled = false;
    this->WaveMinimum = 0.00f;
    this->WaveMaximum = 0.00f;
    this->WaveEase = EControlRigAnimEasingType::Linear;
}

