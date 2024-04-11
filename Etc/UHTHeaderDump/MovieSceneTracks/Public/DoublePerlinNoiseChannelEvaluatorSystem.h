#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "DoublePerlinNoiseChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UDoublePerlinNoiseChannelEvaluatorSystem();

};

