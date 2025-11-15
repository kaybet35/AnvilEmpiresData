#pragma once
#include "CoreMinimal.h"
#include "LightingChannels.generated.h"

USTRUCT(BlueprintType)
struct FLightingChannels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChannel0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChannel1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChannel2: 1;
    
    ENGINE_API FLightingChannels();
};

