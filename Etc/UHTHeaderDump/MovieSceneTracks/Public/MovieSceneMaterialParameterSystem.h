#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneMaterialParameterSystem.generated.h"

class UMovieScenePiecewiseDoubleBlenderSystem;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;
    
    UMovieSceneMaterialParameterSystem();

};

