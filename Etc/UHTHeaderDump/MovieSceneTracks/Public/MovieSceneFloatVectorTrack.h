#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneFloatVectorTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChannelsUsed;
    
public:
    UMovieSceneFloatVectorTrack();

};

