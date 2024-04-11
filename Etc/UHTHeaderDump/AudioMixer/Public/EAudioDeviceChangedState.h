#pragma once
#include "CoreMinimal.h"
#include "EAudioDeviceChangedState.generated.h"

UENUM(BlueprintType)
enum class EAudioDeviceChangedState : uint8 {
    Invalid,
    Active,
    Disabled,
    NotPresent,
    Unplugged,
    Count,
};

