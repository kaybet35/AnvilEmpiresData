#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzerSettings -FallbackName=AudioAnalyzerSettings
#include "AudioSynesthesiaSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UAudioSynesthesiaSettings : public UAudioAnalyzerSettings {
    GENERATED_BODY()
public:
    UAudioSynesthesiaSettings();

};

