#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePreAnimatedStateSystemInterface -FallbackName=MovieScenePreAnimatedStateSystemInterface
#include "MovieSceneWidgetMaterialSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface {
    GENERATED_BODY()
public:
    UMovieSceneWidgetMaterialSystem();


    // Fix for true pure virtual functions not being implemented
};

