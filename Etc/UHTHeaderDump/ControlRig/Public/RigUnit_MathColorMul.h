#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBinaryAggregateOp.h"
#include "RigUnit_MathColorMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathColorMul();
};

