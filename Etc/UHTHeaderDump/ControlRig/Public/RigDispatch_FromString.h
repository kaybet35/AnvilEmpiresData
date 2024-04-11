#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_FromString.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_FromString : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_FromString();
};

