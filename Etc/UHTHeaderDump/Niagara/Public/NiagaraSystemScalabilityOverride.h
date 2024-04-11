#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilityOverride.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideDistanceSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInstanceCountSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverridePerSystemInstanceCountSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideVisibilitySettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideGlobalBudgetScalingSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCullProxySettings: 1;
    
    FNiagaraSystemScalabilityOverride();
};

