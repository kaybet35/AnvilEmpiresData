#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_HighlevelBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_HighlevelBaseMutable();
};

