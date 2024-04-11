#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleConstant.h"
#include "RigUnit_MathDoubleConstHalfPi.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleConstHalfPi : public FRigUnit_MathDoubleConstant {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleConstHalfPi();
};

