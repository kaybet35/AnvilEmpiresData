#pragma once
#include "CoreMinimal.h"
#include "EAnvilHitConversionType.generated.h"

UENUM(BlueprintType)
enum class EAnvilHitConversionType : uint8 {
    ConvertItemAtMaxProgress,
    ConvertUnderlyingItemOnFirstHit,
    NumTypes,
};

