#pragma once
#include "CoreMinimal.h"
#include "EOodleNetworkEnableMode.generated.h"

UENUM(BlueprintType)
enum class EOodleNetworkEnableMode : uint8 {
    AlwaysEnabled,
    WhenCompressedPacketReceived,
};

