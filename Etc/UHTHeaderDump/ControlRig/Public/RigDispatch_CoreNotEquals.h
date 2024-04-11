#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_CoreEquals.h"
#include "RigDispatch_CoreNotEquals.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_CoreNotEquals : public FRigDispatch_CoreEquals {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_CoreNotEquals();
};

