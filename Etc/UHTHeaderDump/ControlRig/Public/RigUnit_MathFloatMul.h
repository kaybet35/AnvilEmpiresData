#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryAggregateOp.h"
#include "RigUnit_MathFloatMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatMul();
};

