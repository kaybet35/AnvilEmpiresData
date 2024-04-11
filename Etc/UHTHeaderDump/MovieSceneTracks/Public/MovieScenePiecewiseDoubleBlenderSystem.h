#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneValueDecomposer -FallbackName=MovieSceneValueDecomposer
#include "MovieScenePiecewiseDoubleBlenderSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem, public IMovieSceneValueDecomposer {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseDoubleBlenderSystem();


    // Fix for true pure virtual functions not being implemented
};

