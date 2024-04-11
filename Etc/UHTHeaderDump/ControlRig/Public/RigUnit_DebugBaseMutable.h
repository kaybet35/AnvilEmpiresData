#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DebugBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DebugBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_DebugBaseMutable();
};

