#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryAggregateOp.h"
#include "RigUnit_MathFloatMin.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatMin();
};

