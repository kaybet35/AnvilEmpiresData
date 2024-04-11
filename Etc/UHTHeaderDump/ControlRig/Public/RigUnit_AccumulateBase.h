#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateBase : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    FRigUnit_AccumulateBase();
};

