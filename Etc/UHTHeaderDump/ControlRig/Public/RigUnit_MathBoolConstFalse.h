#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolConstant.h"
#include "RigUnit_MathBoolConstFalse.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant {
    GENERATED_BODY()
public:
    FRigUnit_MathBoolConstFalse();
};

