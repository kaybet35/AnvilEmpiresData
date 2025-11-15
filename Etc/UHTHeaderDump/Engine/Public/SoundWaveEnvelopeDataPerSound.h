#pragma once
#include "CoreMinimal.h"
#include "SoundWaveEnvelopeDataPerSound.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FSoundWaveEnvelopeDataPerSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Envelope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
    ENGINE_API FSoundWaveEnvelopeDataPerSound();
};

