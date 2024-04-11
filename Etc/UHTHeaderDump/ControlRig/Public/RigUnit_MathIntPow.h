#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntPow.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntPow();
};

