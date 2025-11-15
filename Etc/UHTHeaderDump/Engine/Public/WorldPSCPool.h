#pragma once
#include "CoreMinimal.h"
#include "PSCPool.h"
#include "WorldPSCPool.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct ENGINE_API FWorldPSCPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools;
    
public:
    FWorldPSCPool();
};

