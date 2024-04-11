#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_HierarchyReset.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_HierarchyReset();
};

