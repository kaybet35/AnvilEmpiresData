#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_MathMutableBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathMutableBase : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_MathMutableBase();
};

