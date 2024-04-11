#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryOp.h"
#include "RigUnit_MathDoubleSub.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleSub : public FRigUnit_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleSub();
};

