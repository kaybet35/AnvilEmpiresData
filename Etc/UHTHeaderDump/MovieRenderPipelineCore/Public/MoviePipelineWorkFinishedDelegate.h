#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineOutputData.h"
#include "MoviePipelineWorkFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoviePipelineWorkFinished, FMoviePipelineOutputData, Results);

