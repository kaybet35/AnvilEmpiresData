#include "NiagaraDataInterfaceAsyncGpuTrace.h"

UNiagaraDataInterfaceAsyncGpuTrace::UNiagaraDataInterfaceAsyncGpuTrace() {
    this->MaxTracesPerParticle = 1;
    this->MaxRetraces = 0;
    this->TraceProvider = ENDICollisionQuery_AsyncGpuTraceProvider::Default;
}


