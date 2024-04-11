#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryAggregateOp.h"
#include "RigUnit_MathVectorMin.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorMin();
};

