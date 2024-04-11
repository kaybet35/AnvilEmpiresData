#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBinaryAggregateOp.h"
#include "RigUnit_MathTransformMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathTransformMul();
};

