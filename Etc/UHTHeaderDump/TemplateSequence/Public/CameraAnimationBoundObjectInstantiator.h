#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "CameraAnimationBoundObjectInstantiator.generated.h"

UCLASS(Blueprintable)
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UCameraAnimationBoundObjectInstantiator();

};

