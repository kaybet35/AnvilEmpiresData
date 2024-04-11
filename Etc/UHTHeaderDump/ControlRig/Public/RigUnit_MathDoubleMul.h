#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryAggregateOp.h"
#include "RigUnit_MathDoubleMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleMul : public FRigUnit_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleMul();
};

