#pragma once
#include "CoreMinimal.h"
#include "MeterResults.h"
#include "OnLatestOverallMeterResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLatestOverallMeterResults, const FMeterResults&, LatestOverallMeterResults);

