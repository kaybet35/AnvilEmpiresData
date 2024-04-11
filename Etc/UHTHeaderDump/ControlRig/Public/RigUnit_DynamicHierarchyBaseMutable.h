#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DynamicHierarchyBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_DynamicHierarchyBaseMutable();
};

