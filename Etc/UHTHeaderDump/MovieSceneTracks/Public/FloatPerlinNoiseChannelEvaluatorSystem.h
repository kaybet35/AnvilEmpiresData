#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "FloatPerlinNoiseChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UFloatPerlinNoiseChannelEvaluatorSystem();

};

