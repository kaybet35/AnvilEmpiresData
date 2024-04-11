#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryAggregateOp.h"
#include "RigUnit_MathIntMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntMul();
};

