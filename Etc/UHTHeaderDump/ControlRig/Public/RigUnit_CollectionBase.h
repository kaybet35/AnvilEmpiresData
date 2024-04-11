#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_CollectionBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionBase : public FRigUnit {
    GENERATED_BODY()
public:
    FRigUnit_CollectionBase();
};

