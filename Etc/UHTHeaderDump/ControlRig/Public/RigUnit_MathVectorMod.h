#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorMod.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathVectorMod();
};

