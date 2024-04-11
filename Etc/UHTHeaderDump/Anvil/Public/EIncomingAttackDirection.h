#pragma once
#include "CoreMinimal.h"
#include "EIncomingAttackDirection.generated.h"

UENUM(BlueprintType)
enum class EIncomingAttackDirection : uint8 {
    None,
    Front,
    Back,
    Left,
    Right,
};

