#pragma once
#include "CoreMinimal.h"
#include "EAnvilScreenType.generated.h"

UENUM(BlueprintType)
enum class EAnvilScreenType : uint8 {
    None,
    Opening,
    Connect,
    Gameplay,
    Pause,
    Options,
    Credits,
    Count,
    Admin,
    Help,
    FactionSelect,
    ServerSelect,
    DeploymentMap,
    ShardSelector,
};

