#pragma once
#include "CoreMinimal.h"
#include "EAlertType.generated.h"

UENUM(BlueprintType)
enum class EAlertType : uint8 {
    General,
    QueueStatus,
    Reinforcement,
    ClearReinforcement,
    TimeUntilAgeEndAlert,
    TempleUnderAttack,
};

