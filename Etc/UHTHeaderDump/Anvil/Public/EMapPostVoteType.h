#pragma once
#include "CoreMinimal.h"
#include "EMapPostVoteType.generated.h"

UENUM(BlueprintType)
enum class EMapPostVoteType : uint8 {
    None,
    Up,
    Down,
};

