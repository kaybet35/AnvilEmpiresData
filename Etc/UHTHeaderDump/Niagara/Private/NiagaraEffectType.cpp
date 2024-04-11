#include "NiagaraEffectType.h"

UNiagaraEffectType::UNiagaraEffectType() {
    this->bAllowCullingForLocalPlayers = false;
    this->UpdateFrequency = ENiagaraScalabilityUpdateFrequency::SpawnOnly;
    this->CullReaction = ENiagaraCullReaction::DeactivateImmediate;
    this->SignificanceHandler = NULL;
    this->PerformanceBaselineController = NULL;
}


