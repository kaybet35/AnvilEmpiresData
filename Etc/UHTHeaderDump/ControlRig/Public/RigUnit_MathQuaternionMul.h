#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBinaryAggregateOp.h"
#include "RigUnit_MathQuaternionMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathQuaternionMul();
};

