#include "AnimNotifyState_TimedNiagaraEffectAdvanced.h"

UAnimNotifyState_TimedNiagaraEffectAdvanced::UAnimNotifyState_TimedNiagaraEffectAdvanced() {
    this->bEnableNormalizedNotifyProgress = true;
    this->NotifyProgressUserParameter = TEXT("NormalizedNotifyProgress");
}

float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(UMeshComponent* MeshComp) const {
    return 0.0f;
}


