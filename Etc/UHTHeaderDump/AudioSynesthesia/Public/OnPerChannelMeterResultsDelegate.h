#pragma once
#include "CoreMinimal.h"
#include "MeterResults.h"
#include "OnPerChannelMeterResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerChannelMeterResults, int32, ChannelIndex, const TArray<FMeterResults>&, MeterResults);

