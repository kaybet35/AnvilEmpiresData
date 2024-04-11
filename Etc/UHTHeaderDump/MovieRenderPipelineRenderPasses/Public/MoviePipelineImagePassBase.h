#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineRenderPass -FallbackName=MoviePipelineRenderPass
#include "MoviePipelineImagePassBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineImagePassBase : public UMoviePipelineRenderPass {
    GENERATED_BODY()
public:
    UMoviePipelineImagePassBase();

};

