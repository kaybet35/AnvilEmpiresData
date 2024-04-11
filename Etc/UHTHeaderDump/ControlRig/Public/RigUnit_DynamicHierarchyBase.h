#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_DynamicHierarchyBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DynamicHierarchyBase : public FRigUnit {
    GENERATED_BODY()
public:
    FRigUnit_DynamicHierarchyBase();
};

