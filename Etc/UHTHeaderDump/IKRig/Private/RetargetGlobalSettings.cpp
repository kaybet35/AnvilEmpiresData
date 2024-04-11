#include "RetargetGlobalSettings.h"

FRetargetGlobalSettings::FRetargetGlobalSettings() {
    this->bEnableRoot = false;
    this->bEnableFK = false;
    this->bEnableIK = false;
    this->bWarping = false;
    this->DirectionSource = EWarpingDirectionSource::Goals;
    this->ForwardDirection = EBasicAxis::X;
    this->WarpForwards = 0.00f;
    this->SidewaysOffset = 0.00f;
    this->WarpSplay = 0.00f;
}

