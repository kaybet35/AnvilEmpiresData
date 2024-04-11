#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettings.h"
#include "NiagaraEmitterScalabilityOverride.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideSpawnCountScale: 1;
    
    FNiagaraEmitterScalabilityOverride();
};

