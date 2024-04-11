#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatConstant.h"
#include "RigUnit_MathFloatConstPi.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatConstPi();
};

