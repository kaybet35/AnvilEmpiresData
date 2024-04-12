#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemPayloadType.generated.h"

UENUM(BlueprintType)
enum class EAnvilItemPayloadType : uint8 {
    None,
    Quality,
    ConversionProgress,
};

