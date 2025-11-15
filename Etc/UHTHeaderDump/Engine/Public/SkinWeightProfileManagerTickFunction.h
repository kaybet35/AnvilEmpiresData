#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "SkinWeightProfileManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSkinWeightProfileManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FSkinWeightProfileManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSkinWeightProfileManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSkinWeightProfileManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

