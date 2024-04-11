#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolUnaryOp.h"
#include "RigUnit_MathBoolNot.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathBoolNot();
};

