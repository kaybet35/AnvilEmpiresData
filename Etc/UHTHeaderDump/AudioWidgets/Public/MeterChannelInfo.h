#pragma once
#include "CoreMinimal.h"
#include "MeterChannelInfo.generated.h"

USTRUCT(BlueprintType)
struct FMeterChannelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeakValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClippingValue;
    
    AUDIOWIDGETS_API FMeterChannelInfo();
};

