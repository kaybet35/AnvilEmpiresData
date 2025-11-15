#include "ParticleModuleCameraOffset.h"

UParticleModuleCameraOffset::UParticleModuleCameraOffset() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bSpawnTimeOnly = false;
    this->UpdateMethod = EPCOUM_DirectSet;
}


