#include "NiagaraSimCacheFunctionLibrary.h"

UNiagaraSimCacheFunctionLibrary::UNiagaraSimCacheFunctionLibrary() {
}

UNiagaraSimCache* UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(UObject* WorldContextObject) {
    return NULL;
}

bool UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime) {
    return false;
}


