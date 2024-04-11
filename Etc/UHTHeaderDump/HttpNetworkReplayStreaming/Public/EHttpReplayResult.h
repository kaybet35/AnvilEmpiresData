#pragma once
#include "CoreMinimal.h"
#include "EHttpReplayResult.generated.h"

UENUM(BlueprintType)
enum class EHttpReplayResult : uint8 {
    Success,
    FailedJsonParse,
    DataUnavailable,
    InvalidHttpResponse,
    CompressionFailed,
    DecompressionFailed,
    InvalidPayload,
    Unknown,
};

