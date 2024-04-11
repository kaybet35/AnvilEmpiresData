#pragma once
#include "CoreMinimal.h"
#include "SynesthesiaSpectrumResults.h"
#include "OnLatestSpectrumResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLatestSpectrumResults, int32, ChannelIndex, const FSynesthesiaSpectrumResults&, LatestSpectrumResults);

