#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "BoolChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UBoolChannelEvaluatorSystem();

};

