#include "NiagaraLensEffectBase.h"

ANiagaraLensEffectBase::ANiagaraLensEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseAuthoredFOV = 80.00f;
    this->bAllowMultipleInstances = false;
    this->bResetWhenRetriggered = true;
    this->OwningCameraManager = NULL;
}


