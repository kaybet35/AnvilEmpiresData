#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackInstance -FallbackName=MovieSceneTrackInstance
#include "MovieSceneCVarTrackInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance {
    GENERATED_BODY()
public:
    UMovieSceneCVarTrackInstance();

};

