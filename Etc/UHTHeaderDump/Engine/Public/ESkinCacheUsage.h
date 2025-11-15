#pragma once
#include "CoreMinimal.h"
#include "ESkinCacheUsage.generated.h"

UENUM(BlueprintType)
enum class ESkinCacheUsage : uint8 {
    Auto,
    Disabled = 255,
    Enabled = 1,
};

