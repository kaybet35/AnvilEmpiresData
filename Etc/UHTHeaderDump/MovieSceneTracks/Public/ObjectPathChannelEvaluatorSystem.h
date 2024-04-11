#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "ObjectPathChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UObjectPathChannelEvaluatorSystem();

};

