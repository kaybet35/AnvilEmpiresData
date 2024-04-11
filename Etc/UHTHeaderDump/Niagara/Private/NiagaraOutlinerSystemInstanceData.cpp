#include "NiagaraOutlinerSystemInstanceData.h"

FNiagaraOutlinerSystemInstanceData::FNiagaraOutlinerSystemInstanceData() {
    this->ActualExecutionState = ENiagaraExecutionState::Active;
    this->RequestedExecutionState = ENiagaraExecutionState::Active;
    this->bPendingKill = false;
    this->bUsingCullProxy = false;
    this->PoolMethod = ENCPoolMethod::None;
    this->TickGroup = TG_PrePhysics;
    this->GpuTickStage = ENiagaraGpuComputeTickStage::First;
    this->bIsSolo = false;
    this->bRequiresDistanceFieldData = false;
    this->bRequiresDepthBuffer = false;
    this->bRequiresEarlyViewData = false;
    this->bRequiresViewUniformBuffer = false;
    this->bRequiresRayTracingScene = false;
}

