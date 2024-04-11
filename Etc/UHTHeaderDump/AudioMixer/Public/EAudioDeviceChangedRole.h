#pragma once
#include "CoreMinimal.h"
#include "EAudioDeviceChangedRole.generated.h"

UENUM(BlueprintType)
enum class EAudioDeviceChangedRole : uint8 {
    Invalid,
    Console,
    Multimedia,
    Communications,
    Count,
};

