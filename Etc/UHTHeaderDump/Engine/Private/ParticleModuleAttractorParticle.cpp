#include "ParticleModuleAttractorParticle.h"

UParticleModuleAttractorParticle::UParticleModuleAttractorParticle() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bStrengthByDistance = true;
    this->bAffectBaseVelocity = false;
    this->SelectionMethod = EAPSM_Random;
    this->bRenewSource = false;
    this->bInheritSourceVel = false;
    this->LastSelIndex = 0;
}


