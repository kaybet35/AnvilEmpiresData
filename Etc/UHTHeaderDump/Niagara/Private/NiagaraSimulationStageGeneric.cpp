#include "NiagaraSimulationStageGeneric.h"

UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric() {
    this->IterationSource = ENiagaraIterationSource::Particles;
    this->Iterations = 1;
    this->bSpawnOnly = false;
    this->ExecuteBehavior = ENiagaraSimStageExecuteBehavior::Always;
    this->bDisablePartialParticleUpdate = false;
    this->bParticleIterationStateEnabled = false;
    this->bGpuDispatchForceLinear = false;
    this->bOverrideGpuDispatchType = false;
    this->OverrideGpuDispatchType = ENiagaraGpuDispatchType::OneD;
    this->bOverrideGpuDispatchNumThreads = false;
}


