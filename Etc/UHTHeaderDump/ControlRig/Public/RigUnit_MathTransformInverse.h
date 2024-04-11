#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformUnaryOp.h"
#include "RigUnit_MathTransformInverse.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathTransformInverse();
};

