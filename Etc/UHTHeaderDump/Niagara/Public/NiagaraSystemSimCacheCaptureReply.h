#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemSimCacheCaptureReply.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemSimCacheCaptureReply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SimCacheData;
    
    FNiagaraSystemSimCacheCaptureReply();
};

