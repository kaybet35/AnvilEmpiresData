#pragma once
#include "CoreMinimal.h"
#include "MeterResults.h"
#include "OnOverallMeterResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverallMeterResults, const TArray<FMeterResults>&, MeterResults);

