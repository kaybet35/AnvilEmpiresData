#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeDataFlags.generated.h"

UENUM()
enum class EAnimNodeDataFlags : uint32 {
    None,
    HasInitialUpdateFunction,
    HasBecomeRelevantFunction,
    HasUpdateFunction = 4,
};

