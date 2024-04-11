#include "SimulationStageMetaData.h"

FSimulationStageMetaData::FSimulationStageMetaData() {
    this->ExecuteBehavior = ENiagaraSimStageExecuteBehavior::Always;
    this->bWritesParticles = false;
    this->bPartialParticleUpdate = false;
    this->bParticleIterationStateEnabled = false;
    this->bOverrideElementCount = false;
    this->NumIterations = 0;
    this->GpuDispatchType = ENiagaraGpuDispatchType::OneD;
}

