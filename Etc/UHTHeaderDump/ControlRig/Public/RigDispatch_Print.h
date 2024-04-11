#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_Print.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_Print : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_Print();
};

