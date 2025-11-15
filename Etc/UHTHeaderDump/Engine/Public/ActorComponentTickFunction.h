#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "ActorComponentTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FActorComponentTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FActorComponentTickFunction();
};

template<>
struct TStructOpsTypeTraits<FActorComponentTickFunction> : public TStructOpsTypeTraitsBase2<FActorComponentTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

