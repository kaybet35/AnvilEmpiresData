#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDeviceProfileRedirectMode.h"
#include "NiagaraPlatformSetCVarCondition.h"
#include "NiagaraPlatformSetRedirect.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPlatformSetRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ProfileNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDeviceProfileRedirectMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RedirectProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPlatformSetCVarCondition CVarConditionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPlatformSetCVarCondition CVarConditionDisabled;
    
    NIAGARA_API FNiagaraPlatformSetRedirect();
};

