#include "NiagaraSystemScalabilityOverride.h"

FNiagaraSystemScalabilityOverride::FNiagaraSystemScalabilityOverride() {
    this->bOverrideDistanceSettings = false;
    this->bOverrideInstanceCountSettings = false;
    this->bOverridePerSystemInstanceCountSettings = false;
    this->bOverrideVisibilitySettings = false;
    this->bOverrideGlobalBudgetScalingSettings = false;
    this->bOverrideCullProxySettings = false;
}

