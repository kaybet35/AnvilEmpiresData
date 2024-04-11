#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineExecutorBase.h"
#include "MoviePipelineLinearExecutorBase.generated.h"

class UMoviePipeline;
class UMoviePipelineQueue;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineQueue* Queue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipeline* ActiveMoviePipeline;
    
public:
    UMoviePipelineLinearExecutorBase();

};

