#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystemLinker -FallbackName=MovieSceneEntitySystemLinker
#include "CameraAnimationEntitySystemLinker.generated.h"

UCLASS(Blueprintable)
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker {
    GENERATED_BODY()
public:
    UCameraAnimationEntitySystemLinker();

};

