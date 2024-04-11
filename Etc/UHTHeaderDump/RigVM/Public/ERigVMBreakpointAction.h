#pragma once
#include "CoreMinimal.h"
#include "ERigVMBreakpointAction.generated.h"

UENUM(BlueprintType)
enum class ERigVMBreakpointAction : uint8 {
    None,
    Resume,
    StepOver,
    StepInto,
    StepOut,
    Max,
};

