#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntSub.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntSub();
};

