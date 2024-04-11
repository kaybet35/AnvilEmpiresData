#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatCos.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatCos();
};

