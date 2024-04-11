#pragma once
#include "CoreMinimal.h"
#include "EEXRCompressionFormat.generated.h"

UENUM(BlueprintType)
enum class EEXRCompressionFormat : uint8 {
    None,
    PIZ,
    ZIP,
    DWAA,
    DWAB,
};

