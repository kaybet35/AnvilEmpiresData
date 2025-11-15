#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "StartPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FStartPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FStartPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FStartPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FStartPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

