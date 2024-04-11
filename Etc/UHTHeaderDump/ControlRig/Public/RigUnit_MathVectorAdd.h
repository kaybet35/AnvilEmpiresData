#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryAggregateOp.h"
#include "RigUnit_MathVectorAdd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorAdd();
};

