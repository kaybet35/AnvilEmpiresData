#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioSpectrumType -FallbackName=EAudioSpectrumType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTSize -FallbackName=EFFTSize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTWindowType -FallbackName=EFFTWindowType
#include "AudioSynesthesiaSettings.h"
#include "SynesthesiaSpectrumAnalysisSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFFTSize FFTSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumType SpectrumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFFTWindowType WindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownmixToMono;
    
    USynesthesiaSpectrumAnalysisSettings();

};

