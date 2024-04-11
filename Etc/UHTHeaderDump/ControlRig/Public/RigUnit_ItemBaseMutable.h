#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_ItemBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_ItemBaseMutable();
};

