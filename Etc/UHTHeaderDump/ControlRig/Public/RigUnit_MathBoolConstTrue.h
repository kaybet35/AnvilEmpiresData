#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolConstant.h"
#include "RigUnit_MathBoolConstTrue.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant {
    GENERATED_BODY()
public:
    FRigUnit_MathBoolConstTrue();
};

