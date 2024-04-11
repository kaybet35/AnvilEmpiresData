#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_HierarchyBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_HierarchyBaseMutable();
};

