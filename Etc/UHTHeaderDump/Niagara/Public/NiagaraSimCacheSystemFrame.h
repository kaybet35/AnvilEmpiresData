#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraSimCacheDataBuffers.h"
#include "NiagaraSimCacheSystemFrame.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheSystemFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LocalBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheDataBuffers SystemDataBuffers;
    
    NIAGARA_API FNiagaraSimCacheSystemFrame();
};

