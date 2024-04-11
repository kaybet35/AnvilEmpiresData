#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionUnaryOp.h"
#include "RigUnit_MathQuaternionInverse.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathQuaternionInverse();
};

