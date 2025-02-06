#pragma once
#include "CoreMinimal.h"
#include "EAnvilVoteType.generated.h"

UENUM(BlueprintType)
enum class EAnvilVoteType : uint8 {
    None,
    Up,
    Down,
    NumTypes,
};

