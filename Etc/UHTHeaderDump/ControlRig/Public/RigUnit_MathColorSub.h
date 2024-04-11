#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBinaryOp.h"
#include "RigUnit_MathColorSub.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathColorSub();
};

