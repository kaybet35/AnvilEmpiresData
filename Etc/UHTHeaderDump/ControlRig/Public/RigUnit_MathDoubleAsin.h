#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleUnaryOp.h"
#include "RigUnit_MathDoubleAsin.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleAsin : public FRigUnit_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleAsin();
};

