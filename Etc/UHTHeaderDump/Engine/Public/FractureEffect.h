#pragma once
#include "CoreMinimal.h"
#include "FractureEffect.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FFractureEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    ENGINE_API FFractureEffect();
};

