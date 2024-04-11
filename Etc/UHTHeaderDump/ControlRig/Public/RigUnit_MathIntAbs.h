#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntUnaryOp.h"
#include "RigUnit_MathIntAbs.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntAbs();
};

