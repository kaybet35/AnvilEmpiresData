#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneDoubleTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneDoubleTrack();

};

