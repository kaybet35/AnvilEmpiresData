#pragma once
#include "CoreMinimal.h"
#include "R2WeatherEventConfig.h"
#include "R2WeatherEvent.generated.h"

USTRUCT(BlueprintType)
struct FR2WeatherEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2WeatherEventConfig Config;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 StartUnixTimestamp;
    
    R2_API FR2WeatherEvent();
};

