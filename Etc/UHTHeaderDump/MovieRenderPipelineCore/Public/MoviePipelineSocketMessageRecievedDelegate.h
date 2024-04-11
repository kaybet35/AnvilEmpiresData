#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSocketMessageRecievedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoviePipelineSocketMessageRecieved, const FString&, Message);

