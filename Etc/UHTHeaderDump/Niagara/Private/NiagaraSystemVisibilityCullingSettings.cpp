#include "NiagaraSystemVisibilityCullingSettings.h"

FNiagaraSystemVisibilityCullingSettings::FNiagaraSystemVisibilityCullingSettings() {
    this->bCullWhenNotRendered = false;
    this->bCullByViewFrustum = false;
    this->bAllowPreCullingByViewFrustum = false;
    this->MaxTimeOutsideViewFrustum = 0.00f;
    this->MaxTimeWithoutRender = 0.00f;
}

