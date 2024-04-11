#pragma once
#include "CoreMinimal.h"
#include "MeterResults.h"
#include "OnLatestPerChannelMeterResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLatestPerChannelMeterResults, int32, ChannelIndex, const FMeterResults&, LatestMeterResults);

