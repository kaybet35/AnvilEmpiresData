#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCullProxyMode.h"
#include "NiagaraGlobalBudgetScaling.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraSystemVisibilityCullingSettings.h"
#include "NiagaraSystemScalabilitySettings.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullByDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullMaxInstanceCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullPerSystemMaxInstanceCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullByMaxTimeWithoutRender: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSystemInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeWithoutRender;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraCullProxyMode CullProxyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSystemProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSystemVisibilityCullingSettings VisibilityCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraGlobalBudgetScaling BudgetScaling;
    
    FNiagaraSystemScalabilitySettings();
};

