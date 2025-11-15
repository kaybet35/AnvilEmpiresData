#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralData.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequencyHz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedMagnitude;
    
    ENGINE_API FSoundWaveSpectralData();
};

