#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAssetBase.h"
#include "AudioAnalyzerSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase {
    GENERATED_BODY()
public:
    UAudioAnalyzerSettings();

};

