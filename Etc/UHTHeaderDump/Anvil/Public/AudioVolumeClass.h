#pragma once
#include "CoreMinimal.h"
#include "AudioVolumeClass.generated.h"

class USoundClass;
class USoundMix;

USTRUCT(BlueprintType)
struct FAudioVolumeClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* Mixer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    ANVIL_API FAudioVolumeClass();
};

