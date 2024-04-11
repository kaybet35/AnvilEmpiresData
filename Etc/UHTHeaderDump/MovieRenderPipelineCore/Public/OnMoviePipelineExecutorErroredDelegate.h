#pragma once
#include "CoreMinimal.h"
#include "OnMoviePipelineExecutorErroredDelegate.generated.h"

class UMoviePipeline;
class UMoviePipelineExecutorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMoviePipelineExecutorErrored, UMoviePipelineExecutorBase*, PipelineExecutor, UMoviePipeline*, PipelineWithError, bool, bIsFatal, FText, ErrorText);

