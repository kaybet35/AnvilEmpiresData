#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneDoubleVectorTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChannelsUsed;
    
public:
    UMovieSceneDoubleVectorTrack();

};

