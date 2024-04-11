#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineViewFamilySetting.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineViewFamilySetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UMoviePipelineViewFamilySetting();

};

