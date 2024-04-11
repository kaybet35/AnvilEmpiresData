#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsChannelLinkMode -FallbackName=ESubmixEffectDynamicsChannelLinkMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsKeySource -FallbackName=ESubmixEffectDynamicsKeySource
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsPeakMode -FallbackName=ESubmixEffectDynamicsPeakMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsProcessorType -FallbackName=ESubmixEffectDynamicsProcessorType
#include "DynamicsBandSettings.h"
#include "SubmixEffectMultibandCompressorSettings.generated.h"

class UAudioBus;
class USoundSubmix;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectMultibandCompressorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsChannelLinkMode LinkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnalogMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFourPole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsKeySource KeySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioBus* ExternalAudioBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ExternalSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeyAudition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicsBandSettings> Bands;
    
    FSubmixEffectMultibandCompressorSettings();
};

