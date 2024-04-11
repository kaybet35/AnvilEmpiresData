#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineCustomTimeStep -FallbackName=EngineCustomTimeStep
#include "MoviePipelineCustomTimeStep.generated.h"

UCLASS(Blueprintable)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep {
    GENERATED_BODY()
public:
    UMoviePipelineCustomTimeStep();

};

