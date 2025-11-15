#include "ParticleModuleEventReceiverSpawn.h"

UParticleModuleEventReceiverSpawn::UParticleModuleEventReceiverSpawn() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bUseParticleTime = false;
    this->bUsePSysLocation = false;
    this->bInheritVelocity = false;
    this->bBanPhysicalMaterials = false;
}


