#pragma once
#include "CoreMinimal.h"
#include "EAnvilR2WeatherEventType.generated.h"

UENUM(BlueprintType)
enum class EAnvilR2WeatherEventType : uint8 {
    Rain,
    Snow,
};

