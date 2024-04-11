#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryAggregateOp.h"
#include "RigUnit_MathFloatAdd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatAdd();
};

