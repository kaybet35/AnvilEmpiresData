#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_CoreBase.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_CoreBase : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_CoreBase();
};

