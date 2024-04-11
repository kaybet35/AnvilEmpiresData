#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionUnaryOp.h"
#include "RigUnit_MathQuaternionUnit.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathQuaternionUnit();
};

