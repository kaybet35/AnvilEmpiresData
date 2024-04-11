#pragma once
#include "CoreMinimal.h"
#include "LoudnessResults.h"
#include "OnPerChannelLoudnessResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerChannelLoudnessResults, int32, ChannelIndex, const TArray<FLoudnessResults>&, LoudnessResults);

