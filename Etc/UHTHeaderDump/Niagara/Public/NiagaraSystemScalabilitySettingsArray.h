#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilitySettingsArray.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemScalabilitySettingsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSystemScalabilitySettings> Settings;
    
    FNiagaraSystemScalabilitySettingsArray();
};

