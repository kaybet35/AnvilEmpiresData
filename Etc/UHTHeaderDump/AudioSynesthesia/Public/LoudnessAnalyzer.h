#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnLatestOverallLoudnessResultsDelegate.h"
#include "OnLatestPerChannelLoudnessResultsDelegate.h"
#include "OnOverallLoudnessResultsDelegate.h"
#include "OnPerChannelLoudnessResultsDelegate.h"
#include "LoudnessAnalyzer.generated.h"

class ULoudnessSettings;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoudnessSettings* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverallLoudnessResults OnOverallLoudnessResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerChannelLoudnessResults OnPerChannelLoudnessResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatestOverallLoudnessResults OnLatestOverallLoudnessResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatestPerChannelLoudnessResults OnLatestPerChannelLoudnessResults;
    
    ULoudnessAnalyzer();

};

