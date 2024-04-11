#include "VersionedNiagaraEmitterData.h"

FVersionedNiagaraEmitterData::FVersionedNiagaraEmitterData() {
    this->UpdateScriptExecution = ENiagaraPythonUpdateScriptReference::None;
    this->bDeprecated = false;
    this->bLocalSpace = false;
    this->bDeterminism = false;
    this->RandomSeed = 0;
    this->bInterpolatedSpawning = false;
    this->SimTarget = ENiagaraSimTarget::CPUSim;
    this->CalculateBoundsMode = ENiagaraEmitterCalculateBoundMode::Dynamic;
    this->bRequiresPersistentIDs = false;
    this->bCombineEventSpawn = false;
    this->bLimitDeltaTime = false;
    this->MaxGPUParticlesSpawnPerFrame = 0;
    this->MaxDeltaTimePerTick = 0.00f;
    this->AllocationMode = EParticleAllocationMode::AutomaticEstimate;
    this->PreAllocationCount = 0;
    this->GPUComputeScript = NULL;
}

