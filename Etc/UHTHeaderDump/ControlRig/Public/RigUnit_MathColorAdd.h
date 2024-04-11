#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBinaryAggregateOp.h"
#include "RigUnit_MathColorAdd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathColorAdd();
};

