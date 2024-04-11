#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatConstant.h"
#include "RigUnit_MathFloatConstHalfPi.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatConstHalfPi();
};

