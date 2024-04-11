#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineFinishedDelegate.generated.h"

class UMoviePipeline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMoviePipelineFinished, UMoviePipeline*, MoviePipeline, bool, bFatalError);

