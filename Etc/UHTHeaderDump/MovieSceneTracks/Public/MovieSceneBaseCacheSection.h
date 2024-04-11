#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneBaseCacheSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBaseCacheSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UMovieSceneBaseCacheSection();

};

