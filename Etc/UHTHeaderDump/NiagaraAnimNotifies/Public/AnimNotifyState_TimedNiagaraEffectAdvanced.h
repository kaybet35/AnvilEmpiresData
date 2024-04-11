#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "CurveParameterPair.h"
#include "AnimNotifyState_TimedNiagaraEffectAdvanced.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class NIAGARAANIMNOTIFIES_API UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNormalizedNotifyProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyProgressUserParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveParameterPair> AnimCurves;
    
    UAnimNotifyState_TimedNiagaraEffectAdvanced();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetNotifyProgress(UMeshComponent* MeshComp) const;
    
};

