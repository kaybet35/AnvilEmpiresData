#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnLatestSpectrumResultsDelegate.h"
#include "OnSpectrumResultsDelegate.h"
#include "SynesthesiaSpectrumAnalyzer.generated.h"

class USynesthesiaSpectrumAnalysisSettings;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USynesthesiaSpectrumAnalysisSettings* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectrumResults OnSpectrumResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatestSpectrumResults OnLatestSpectrumResults;
    
    USynesthesiaSpectrumAnalyzer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCenterFrequencies() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCenterFrequencies(const float InSampleRate, TArray<float>& OutCenterFrequencies);
    
};

