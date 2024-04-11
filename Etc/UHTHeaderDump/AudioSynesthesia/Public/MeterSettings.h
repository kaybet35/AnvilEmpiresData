#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaSettings.h"
#include "EMeterPeakType.h"
#include "MeterSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UMeterSettings : public UAudioSynesthesiaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeterPeakType PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeterAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeterReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PeakHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClippingThreshold;
    
    UMeterSettings();

};

