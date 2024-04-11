#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryOp.h"
#include "RigUnit_MathFloatSub.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatSub();
};

