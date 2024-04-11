#pragma once
#include "CoreMinimal.h"
#include "LoudnessResults.h"
#include "OnOverallLoudnessResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverallLoudnessResults, const TArray<FLoudnessResults>&, OverallLoudnessResults);

