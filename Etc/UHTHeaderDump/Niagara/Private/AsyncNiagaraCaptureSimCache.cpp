#include "AsyncNiagaraCaptureSimCache.h"

UAsyncNiagaraCaptureSimCache::UAsyncNiagaraCaptureSimCache() {
    this->CaptureSimCache = NULL;
    this->CaptureComponent = NULL;
    this->CaptureNumFrames = 0;
    this->CaptureFrameRate = 0;
    this->CaptureFrameCounter = 0;
    this->TimeOutCounter = 0;
    this->bAdvanceSimulation = false;
    this->AdvanceDeltaTime = 0.02f;
}

UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32 CaptureRate, bool NewBAdvanceSimulation, float NewAdvanceDeltaTime) {
    return NULL;
}

UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32 NumFrames, int32 CaptureRate, bool NewBAdvanceSimulation, float NewAdvanceDeltaTime) {
    return NULL;
}


