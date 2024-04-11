#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBinaryOp.h"
#include "RigUnit_MathBoolNand.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathBoolNand();
};

