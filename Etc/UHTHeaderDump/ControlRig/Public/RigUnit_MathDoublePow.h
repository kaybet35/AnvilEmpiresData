#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryOp.h"
#include "RigUnit_MathDoublePow.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoublePow : public FRigUnit_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoublePow();
};

