#include "RigUnit_ChainHarmonics_Reach.h"

FRigUnit_ChainHarmonics_Reach::FRigUnit_ChainHarmonics_Reach() {
    this->bEnabled = false;
    this->ReachMinimum = 0.00f;
    this->ReachMaximum = 0.00f;
    this->ReachEase = EControlRigAnimEasingType::Linear;
}

