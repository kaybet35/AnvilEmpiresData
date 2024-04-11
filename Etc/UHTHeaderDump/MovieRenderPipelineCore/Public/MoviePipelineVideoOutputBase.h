#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineOutputBase.h"
#include "MoviePipelineVideoOutputBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UMoviePipelineVideoOutputBase();

};

