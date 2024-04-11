#pragma once
#include "CoreMinimal.h"
#include "ERigHierarchyNotification.generated.h"

UENUM(BlueprintType)
enum class ERigHierarchyNotification : uint8 {
    ElementAdded,
    ElementRemoved,
    ElementRenamed,
    ElementSelected,
    ElementDeselected,
    ParentChanged,
    HierarchyReset,
    ControlSettingChanged,
    ControlVisibilityChanged,
    ControlDrivenListChanged,
    ControlShapeTransformChanged,
    ParentWeightsChanged,
    InteractionBracketOpened,
    InteractionBracketClosed,
    Max,
};

