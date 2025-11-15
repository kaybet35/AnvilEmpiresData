#pragma once
#include "CoreMinimal.h"
#include "ESourceBusChannels.h"
#include "SoundWave.h"
#include "SoundSourceBus.generated.h"

class UAudioBus;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USoundSourceBus : public USoundWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceBusChannels SourceBusChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceBusDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioBus* AudioBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDeactivateWhenSilent: 1;
    
    USoundSourceBus();

};

