#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubTrack -FallbackName=MovieSceneSubTrack
#include "MovieSceneCinematicShotTrack.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack {
    GENERATED_BODY()
public:
    UMovieSceneCinematicShotTrack();

};

