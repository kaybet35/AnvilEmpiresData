#pragma once
#include "CoreMinimal.h"
#include "SourceEffectConvolutionReverbSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectConvolutionReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizationVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypass;
    
    FSourceEffectConvolutionReverbSettings();
};

