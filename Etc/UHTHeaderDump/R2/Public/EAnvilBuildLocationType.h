#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildLocationType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildLocationType : uint8 {
    Everywhere,
    Stable,
    Deployed,
    Marketplace,
    Shore,
    OnFoundation,
    NotOnFoundation,
    UnderFoundationCeiling,
    Static,
    Count,
};

