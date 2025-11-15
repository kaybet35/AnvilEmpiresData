#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixSpectralAnalysisBandSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundSubmixSpectralAnalysisBandSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BandFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReleaseTimeMsec;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QFactor;
    
    FSoundSubmixSpectralAnalysisBandSettings();
};

