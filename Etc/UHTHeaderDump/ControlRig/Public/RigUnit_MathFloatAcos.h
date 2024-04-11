#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatAcos.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatAcos();
};

