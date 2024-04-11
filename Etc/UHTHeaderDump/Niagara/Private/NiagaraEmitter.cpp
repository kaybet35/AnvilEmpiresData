#include "NiagaraEmitter.h"

UNiagaraEmitter::UNiagaraEmitter() {
    this->bVersioningEnabled = false;
    this->UniqueEmitterName = TEXT("Emitter");
    this->GPUComputeScript = NULL;
}


