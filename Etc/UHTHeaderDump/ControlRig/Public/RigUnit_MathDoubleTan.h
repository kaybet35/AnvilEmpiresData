#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleUnaryOp.h"
#include "RigUnit_MathDoubleTan.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleTan : public FRigUnit_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleTan();
};

