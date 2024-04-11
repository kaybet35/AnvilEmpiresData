#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBinaryOp.h"
#include "RigUnit_MathDoubleDiv.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleDiv : public FRigUnit_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathDoubleDiv();
};

