#pragma once
#include "CoreMinimal.h"
#include "EConcurrencyVolumeScaleMode.generated.h"

UENUM()
enum class EConcurrencyVolumeScaleMode : int32 {
    Default,
    Distance,
    Priority,
};

