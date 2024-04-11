#pragma once
#include "CoreMinimal.h"
#include "SynesthesiaSpectrumResults.generated.h"

USTRUCT(BlueprintType)
struct AUDIOSYNESTHESIA_API FSynesthesiaSpectrumResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SpectrumValues;
    
    FSynesthesiaSpectrumResults();
};

