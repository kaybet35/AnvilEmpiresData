#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_HierarchyBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyBase : public FRigUnit {
    GENERATED_BODY()
public:
    FRigUnit_HierarchyBase();
};

