#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleUnaryOp.h"
#include "RigUnit_MathDoubleSign.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleSign : public FRigUnit_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleSign();
};

