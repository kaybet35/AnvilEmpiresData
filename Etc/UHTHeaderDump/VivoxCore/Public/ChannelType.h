#pragma once
#include "CoreMinimal.h"
#include "ChannelType.generated.h"

UENUM(BlueprintType)
enum class ChannelType : uint8 {
    NonPositional,
    Positional,
    Echo,
};

