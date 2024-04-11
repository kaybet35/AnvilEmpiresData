#pragma once
#include "CoreMinimal.h"
#include "ERigSwitchParentMode.generated.h"

UENUM(BlueprintType)
enum class ERigSwitchParentMode : uint8 {
    World,
    DefaultParent,
    ParentItem,
};

