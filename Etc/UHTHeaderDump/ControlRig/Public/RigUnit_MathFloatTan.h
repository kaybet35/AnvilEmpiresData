#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatTan.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathFloatTan();
};

