#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineRenderPass.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineRenderPass : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UMoviePipelineRenderPass();

};

