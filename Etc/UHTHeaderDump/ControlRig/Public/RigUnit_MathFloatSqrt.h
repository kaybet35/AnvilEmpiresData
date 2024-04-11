#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatSqrt.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatSqrt();
};

