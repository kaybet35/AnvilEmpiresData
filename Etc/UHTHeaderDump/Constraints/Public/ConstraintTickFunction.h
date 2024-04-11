#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "ConstraintTickFunction.generated.h"

USTRUCT(BlueprintType)
struct CONSTRAINTS_API FConstraintTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FConstraintTickFunction();
};

template<>
struct TStructOpsTypeTraits<FConstraintTickFunction> : public TStructOpsTypeTraitsBase2<FConstraintTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

