#pragma once
#include "CoreMinimal.h"
#include "EOodleNetResult.generated.h"

UENUM(BlueprintType)
enum class EOodleNetResult : uint8 {
    Unknown,
    Success,
    OodleDecodeFailed,
    OodleSerializePayloadFail,
    OodleBadDecompressedLength,
    OodleNoDictionary,
};

