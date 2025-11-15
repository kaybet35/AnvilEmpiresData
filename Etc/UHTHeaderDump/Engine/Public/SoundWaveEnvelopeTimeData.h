#pragma once
#include "CoreMinimal.h"
#include "SoundWaveEnvelopeTimeData.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveEnvelopeTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSec;
    
    ENGINE_API FSoundWaveEnvelopeTimeData();
};

