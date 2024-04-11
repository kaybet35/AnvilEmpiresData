#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleConstant.h"
#include "RigUnit_MathDoubleConstPi.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleConstPi : public FRigUnit_MathDoubleConstant {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleConstPi();
};

