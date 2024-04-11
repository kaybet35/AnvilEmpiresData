#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineOutputBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineOutputBase : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UMoviePipelineOutputBase();

};

