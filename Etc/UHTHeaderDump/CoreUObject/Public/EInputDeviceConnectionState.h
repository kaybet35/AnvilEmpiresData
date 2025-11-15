#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceConnectionState.generated.h"

UENUM(BlueprintType)
enum class EInputDeviceConnectionState : uint8 {
    Invalid,
    Unknown,
    Disconnected,
    Connected,
};

