#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryAggregateOp.h"
#include "RigUnit_MathIntAdd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntAdd();
};

