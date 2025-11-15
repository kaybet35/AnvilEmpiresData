#pragma once
#include "CoreMinimal.h"
#include "ESoundAssetCompressionType.generated.h"

UENUM(BlueprintType)
enum class ESoundAssetCompressionType : uint8 {
    BinkAudio,
    ADPCM,
    PCM,
    PlatformSpecific,
    ProjectDefined,
};

