#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimCacheAttributeCaptureMode.h"
#include "NiagaraSimCacheCreateParameters.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheCreateParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowRebasing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowDataInterfaceCaching: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RebaseIncludeAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RebaseExcludeAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExplicitCaptureAttributes;
    
    NIAGARA_API FNiagaraSimCacheCreateParameters();
};

