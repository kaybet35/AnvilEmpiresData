#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryOp.h"
#include "RigUnit_MathFloatDiv.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatDiv();
};

