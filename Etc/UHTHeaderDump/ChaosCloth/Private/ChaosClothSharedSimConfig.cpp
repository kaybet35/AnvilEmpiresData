#include "ChaosClothSharedSimConfig.h"

UChaosClothSharedSimConfig::UChaosClothSharedSimConfig() {
    this->IterationCount = 1;
    this->MaxIterationCount = 10;
    this->SubdivisionCount = 1;
    this->bUseLocalSpaceSimulation = true;
    this->bUseXPBDConstraints = false;
}


