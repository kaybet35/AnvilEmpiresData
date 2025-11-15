#pragma once
#include "CoreMinimal.h"
#include "EPingType.generated.h"

UENUM(BlueprintType)
enum class EPingType : uint8 {
    None,
    RoundTrip,
    RoundTripExclFrame,
    ICMP = 4,
    UDPQoS = 8,
    Max = UDPQoS,
    Count = ICMP,
};

