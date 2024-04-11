#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBinaryOp.h"
#include "RigUnit_MathBoolNand2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolNand2 : public FRigUnit_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    FRigUnit_MathBoolNand2();
};

