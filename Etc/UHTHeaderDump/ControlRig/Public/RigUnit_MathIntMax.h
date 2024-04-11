#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryAggregateOp.h"
#include "RigUnit_MathIntMax.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntMax();
};

