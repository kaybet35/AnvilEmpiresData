#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveSpectralDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedMagnitude;
    
    ENGINE_API FSoundWaveSpectralDataEntry();
};

