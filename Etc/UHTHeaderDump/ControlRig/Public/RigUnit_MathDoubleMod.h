#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryOp.h"
#include "RigUnit_MathDoubleMod.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleMod : public FRigUnit_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleMod();
};

