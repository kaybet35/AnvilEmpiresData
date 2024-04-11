#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_StartProfilingTimer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    FRigUnit_StartProfilingTimer();
};

