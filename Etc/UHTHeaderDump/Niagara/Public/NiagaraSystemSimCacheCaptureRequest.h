#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemSimCacheCaptureRequest.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemSimCacheCaptureRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CaptureDelayFrames;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CaptureFrames;
    
    FNiagaraSystemSimCacheCaptureRequest();
};

