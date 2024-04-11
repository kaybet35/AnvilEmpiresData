#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryAggregateOp.h"
#include "RigUnit_MathVectorMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorMul();
};

