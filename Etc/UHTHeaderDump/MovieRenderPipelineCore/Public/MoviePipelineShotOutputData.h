#pragma once
#include "CoreMinimal.h"
#include "MoviePipelinePassIdentifier.h"
#include "MoviePipelineRenderPassOutputData.h"
#include "MoviePipelineShotOutputData.generated.h"

class UMoviePipelineExecutorShot;

USTRUCT(BlueprintType)
struct FMoviePipelineShotOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMoviePipelineExecutorShot> Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData> RenderPassData;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineShotOutputData();
};

