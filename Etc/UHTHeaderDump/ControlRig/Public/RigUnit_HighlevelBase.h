#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_HighlevelBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HighlevelBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_HighlevelBase();
};

