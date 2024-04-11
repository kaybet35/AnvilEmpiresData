#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
#include "MovieSceneConstraintChannel.generated.h"

USTRUCT(BlueprintType)
struct CONSTRAINTS_API FMovieSceneConstraintChannel : public FMovieSceneBoolChannel {
    GENERATED_BODY()
public:
    FMovieSceneConstraintChannel();
};

