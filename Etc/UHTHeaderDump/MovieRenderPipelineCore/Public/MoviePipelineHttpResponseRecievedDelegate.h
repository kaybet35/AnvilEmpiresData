#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineHttpResponseRecievedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMoviePipelineHttpResponseRecieved, int32, RequestIndex, int32, ResponseCode, const FString&, Message);

