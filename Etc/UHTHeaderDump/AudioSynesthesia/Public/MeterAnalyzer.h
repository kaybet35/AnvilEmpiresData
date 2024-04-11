#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnLatestOverallMeterResultsDelegate.h"
#include "OnLatestPerChannelMeterResultsDelegate.h"
#include "OnOverallMeterResultsDelegate.h"
#include "OnPerChannelMeterResultsDelegate.h"
#include "MeterAnalyzer.generated.h"

class UMeterSettings;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UMeterAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeterSettings* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverallMeterResults OnOverallMeterResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerChannelMeterResults OnPerChannelMeterResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatestOverallMeterResults OnLatestOverallMeterResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatestPerChannelMeterResults OnLatestPerChannelMeterResults;
    
    UMeterAnalyzer();

};

