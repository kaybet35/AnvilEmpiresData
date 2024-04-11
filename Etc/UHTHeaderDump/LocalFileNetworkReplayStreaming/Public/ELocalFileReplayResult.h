#pragma once
#include "CoreMinimal.h"
#include "ELocalFileReplayResult.generated.h"

UENUM(BlueprintType)
enum class ELocalFileReplayResult : uint8 {
    Success,
    InvalidReplayInfo,
    StreamChunkIndexMismatch,
    DecompressBuffer,
    CompressionNotSupported,
    DecryptBuffer,
    EncryptionNotSupported,
    Unknown,
};

