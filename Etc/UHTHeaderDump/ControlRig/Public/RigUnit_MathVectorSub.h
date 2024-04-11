#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorSub.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorSub();
};

