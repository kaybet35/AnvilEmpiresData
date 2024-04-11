#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAssetBase.h"
#include "AudioAnalyzerNRTSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase {
    GENERATED_BODY()
public:
    UAudioAnalyzerNRTSettings();

};

