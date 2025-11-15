#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralDataEntry.h"
#include "SoundWaveSpectralTimeData.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveSpectralTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundWaveSpectralDataEntry> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSec;
    
    ENGINE_API FSoundWaveSpectralTimeData();
};

