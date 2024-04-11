#include "NiagaraDataInterfaceArray.h"

UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray() {
    this->GpuSyncMode = ENiagaraGpuSyncMode::SyncCpuToGpu;
    this->MaxElements = 0;
}


