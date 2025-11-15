#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "EndPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FEndPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FEndPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FEndPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

