#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "DoubleChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UDoubleChannelEvaluatorSystem();

};

