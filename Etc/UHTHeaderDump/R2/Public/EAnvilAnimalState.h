#pragma once
#include "CoreMinimal.h"
#include "EAnvilAnimalState.generated.h"

UENUM(BlueprintType)
enum class EAnvilAnimalState : uint8 {
    Idle,
    Walking,
    Running,
    Scavenging,
    Posturing,
    ChasingTarget,
    Attacking,
    Trapped,
    NumTypes,
};

