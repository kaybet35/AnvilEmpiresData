#pragma once
#include "CoreMinimal.h"
#include "EAnvilStimulusType.generated.h"

UENUM(BlueprintType)
enum class EAnvilStimulusType : uint8 {
    None,
    VisualThreat,
    AuditoryThreat,
    DestroyableObstacle,
    FeedingLocation,
    SettlementLocation,
    NumTypes,
};

