#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntUnaryOp.h"
#include "RigUnit_MathIntSign.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathIntSign();
};

