#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralData.h"
#include "SoundWaveSpectralDataPerSound.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FSoundWaveSpectralDataPerSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundWaveSpectralData> SpectralData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
    ENGINE_API FSoundWaveSpectralDataPerSound();
};

