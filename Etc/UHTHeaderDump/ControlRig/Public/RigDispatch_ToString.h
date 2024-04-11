#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_ToString.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_ToString : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_ToString();
};

