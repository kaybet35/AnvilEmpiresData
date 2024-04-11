#pragma once
#include "CoreMinimal.h"
#include "DeviceType.generated.h"

UENUM(BlueprintType)
enum class DeviceType : uint8 {
    NullDevice,
    SpecificDevice,
    DefaultSystemDevice,
    DefaultCommunicationDevice,
};

