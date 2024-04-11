#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntUnaryOp.h"
#include "RigUnit_MathIntNegate.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntNegate();
};

