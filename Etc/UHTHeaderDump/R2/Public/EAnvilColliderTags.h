#pragma once
#include "CoreMinimal.h"
#include "EAnvilColliderTags.generated.h"

UENUM(BlueprintType)
enum class EAnvilColliderTags : uint8 {
    MeshVisibilityGroup2,
    Tree,
    SiegeTowerRamp,
    MeshFootprint,
    NoBlockAttackLOS,
    Collapsed,
    UnCollapsed,
    FoundationSolidBox,
    FoundationDisallowCeiling,
    NumTypes,
};

