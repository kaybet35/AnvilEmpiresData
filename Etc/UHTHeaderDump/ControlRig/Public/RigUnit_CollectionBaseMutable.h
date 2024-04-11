#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_CollectionBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    FRigUnit_CollectionBaseMutable();
};

