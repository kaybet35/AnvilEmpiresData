#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleUnaryOp.h"
#include "RigUnit_MathDoubleNegate.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleNegate : public FRigUnit_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleNegate();
};

