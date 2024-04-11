#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryAggregateOp.h"
#include "RigUnit_MathDoubleAdd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleAdd : public FRigUnit_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleAdd();
};

