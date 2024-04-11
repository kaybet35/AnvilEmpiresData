#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleUnaryOp.h"
#include "RigUnit_MathDoubleSqrt.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleSqrt : public FRigUnit_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleSqrt();
};

