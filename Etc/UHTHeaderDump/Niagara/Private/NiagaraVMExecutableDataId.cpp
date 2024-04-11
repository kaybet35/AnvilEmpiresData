#include "NiagaraVMExecutableDataId.h"

FNiagaraVMExecutableDataId::FNiagaraVMExecutableDataId() {
    this->ScriptUsageType = ENiagaraScriptUsage::Function;
    this->bUsesRapidIterationParams = false;
    this->bDisableDebugSwitches = false;
    this->bInterpolatedSpawn = false;
    this->bRequiresPersistentIDs = false;
}

