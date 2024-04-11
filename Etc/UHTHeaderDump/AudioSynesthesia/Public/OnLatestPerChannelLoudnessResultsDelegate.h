#pragma once
#include "CoreMinimal.h"
#include "LoudnessResults.h"
#include "OnLatestPerChannelLoudnessResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLatestPerChannelLoudnessResults, int32, ChannelIndex, const FLoudnessResults&, LatestLoudnessResults);

