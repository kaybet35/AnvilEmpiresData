#include "GenlockedFixedRateCustomTimeStep.h"

UGenlockedFixedRateCustomTimeStep::UGenlockedFixedRateCustomTimeStep() {
    this->bShouldBlock = true;
    this->bForceSingleFrameDeltaTime = false;
}


