#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettings.h"
#include "NiagaraEmitterScalabilitySettingsArray.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraEmitterScalabilitySettingsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEmitterScalabilitySettings> Settings;
    
    FNiagaraEmitterScalabilitySettingsArray();
};

