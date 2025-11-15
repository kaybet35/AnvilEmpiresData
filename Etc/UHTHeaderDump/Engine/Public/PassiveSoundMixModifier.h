#pragma once
#include "CoreMinimal.h"
#include "PassiveSoundMixModifier.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FPassiveSoundMixModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVolumeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVolumeThreshold;
    
    ENGINE_API FPassiveSoundMixModifier();
};

