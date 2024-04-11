#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaSettings.h"
#include "ELoudnessCurveTypeEnum.h"
#include "LoudnessSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessSettings : public UAudioSynesthesiaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoudnessCurveTypeEnum CurveType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseFloorDb;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpectedMaxLoudness;
    
    ULoudnessSettings();

};

