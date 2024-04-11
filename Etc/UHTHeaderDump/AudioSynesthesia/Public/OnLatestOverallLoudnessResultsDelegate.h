#pragma once
#include "CoreMinimal.h"
#include "LoudnessResults.h"
#include "OnLatestOverallLoudnessResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLatestOverallLoudnessResults, const FLoudnessResults&, LatestOverallLoudnessResults);

