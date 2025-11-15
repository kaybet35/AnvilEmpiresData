#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "ParticleSystemWorldManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FParticleSystemWorldManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FParticleSystemWorldManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FParticleSystemWorldManagerTickFunction> : public TStructOpsTypeTraitsBase2<FParticleSystemWorldManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

