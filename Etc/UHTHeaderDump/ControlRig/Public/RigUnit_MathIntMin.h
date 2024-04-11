#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryAggregateOp.h"
#include "RigUnit_MathIntMin.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntMin();
};

