#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryAggregateOp.h"
#include "RigUnit_MathDoubleMin.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleMin : public FRigUnit_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleMin();
};

