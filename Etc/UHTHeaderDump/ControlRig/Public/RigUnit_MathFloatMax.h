#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryAggregateOp.h"
#include "RigUnit_MathFloatMax.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatMax();
};

