#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "CameraAnimationSpawnableSystem.generated.h"

UCLASS(Blueprintable)
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UCameraAnimationSpawnableSystem();

};

