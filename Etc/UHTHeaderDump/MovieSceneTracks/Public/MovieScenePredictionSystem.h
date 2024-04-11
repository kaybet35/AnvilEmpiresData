#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieScenePredictionSystem.generated.h"

class UMovieSceneAsyncAction_SequencePrediction;

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;
    
public:
    UMovieScenePredictionSystem();

};

