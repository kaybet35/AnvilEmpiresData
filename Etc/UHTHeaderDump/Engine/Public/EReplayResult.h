#pragma once
#include "CoreMinimal.h"
#include "EReplayResult.generated.h"

UENUM(BlueprintType)
enum class EReplayResult : uint8 {
    Success,
    ReplayNotFound,
    Corrupt,
    UnsupportedCheckpoint,
    GameSpecific,
    InitConnect,
    LoadMap,
    Serialization,
    StreamerError,
    ConnectionClosed,
    MissingArchive,
    Unknown,
};

