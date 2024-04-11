#pragma once
#include "CoreMinimal.h"
#include "OnMoviePipelineExecutorFinishedDelegate.generated.h"

class UMoviePipelineExecutorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoviePipelineExecutorFinished, UMoviePipelineExecutorBase*, PipelineExecutor, bool, bSuccess);

