#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorCross.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorCross();
};

