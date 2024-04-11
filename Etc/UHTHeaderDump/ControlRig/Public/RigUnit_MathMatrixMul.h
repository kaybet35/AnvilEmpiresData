#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathMatrixBinaryAggregateOp.h"
#include "RigUnit_MathMatrixMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathMatrixMul : public FRigUnit_MathMatrixBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathMatrixMul();
};

