#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_ItemBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemBase : public FRigUnit {
    GENERATED_BODY()
public:
    FRigUnit_ItemBase();
};

