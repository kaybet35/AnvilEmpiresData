#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneChannelOverrideContainer.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIESCENE_API UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UMovieSceneChannelOverrideContainer();

};

