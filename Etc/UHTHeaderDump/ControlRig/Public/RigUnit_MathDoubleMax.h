#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryAggregateOp.h"
#include "RigUnit_MathDoubleMax.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleMax : public FRigUnit_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleMax();
};

