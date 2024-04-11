#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryAggregateOp.h"
#include "RigUnit_MathVectorMax.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorMax();
};

