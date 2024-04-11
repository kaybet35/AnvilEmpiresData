#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_SimBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SimBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_SimBaseMutable();
};

