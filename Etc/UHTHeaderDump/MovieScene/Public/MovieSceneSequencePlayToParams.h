#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequencePlayToParams.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequencePlayToParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusive;
    
    MOVIESCENE_API FMovieSceneSequencePlayToParams();
};

