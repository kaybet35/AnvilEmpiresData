#include "RigUnit_ItemHarmonics.h"

FRigUnit_ItemHarmonics::FRigUnit_ItemHarmonics() {
    this->WaveEase = EControlRigAnimEasingType::Linear;
    this->WaveMinimum = 0.00f;
    this->WaveMaximum = 0.00f;
    this->RotationOrder = EEulerRotationOrder::XYZ;
}

