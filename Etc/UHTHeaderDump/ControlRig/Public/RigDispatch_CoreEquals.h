#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_CoreBase.h"
#include "RigDispatch_CoreEquals.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_CoreEquals : public FRigDispatch_CoreBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_CoreEquals();
};

