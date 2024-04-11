#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraSimCacheDataBuffers.h"
#include "NiagaraSimCacheEmitterFrame.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheEmitterFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LocalBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalSpawnedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheDataBuffers ParticleDataBuffers;
    
    NIAGARA_API FNiagaraSimCacheEmitterFrame();
};

