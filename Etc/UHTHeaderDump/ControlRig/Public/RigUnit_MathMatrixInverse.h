#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathMatrixUnaryOp.h"
#include "RigUnit_MathMatrixInverse.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathMatrixInverse : public FRigUnit_MathMatrixUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathMatrixInverse();
};

