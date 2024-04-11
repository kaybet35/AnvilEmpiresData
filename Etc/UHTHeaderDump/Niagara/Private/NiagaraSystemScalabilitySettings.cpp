#include "NiagaraSystemScalabilitySettings.h"

FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings() {
    this->bCullByDistance = false;
    this->bCullMaxInstanceCount = false;
    this->bCullPerSystemMaxInstanceCount = false;
    this->MaxDistance = 0.00f;
    this->bCullByMaxTimeWithoutRender = false;
    this->MaxInstances = 0;
    this->MaxSystemInstances = 0;
    this->MaxTimeWithoutRender = 0.00f;
    this->CullProxyMode = ENiagaraCullProxyMode::None;
    this->MaxSystemProxies = 0;
}

