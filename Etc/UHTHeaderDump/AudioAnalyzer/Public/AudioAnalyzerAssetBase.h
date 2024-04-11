#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioAnalyzerAssetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerAssetBase : public UObject {
    GENERATED_BODY()
public:
    UAudioAnalyzerAssetBase();

};

