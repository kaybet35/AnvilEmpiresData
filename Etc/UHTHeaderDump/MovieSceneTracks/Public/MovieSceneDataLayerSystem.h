#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneDataLayerSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneDataLayerSystem();

};

