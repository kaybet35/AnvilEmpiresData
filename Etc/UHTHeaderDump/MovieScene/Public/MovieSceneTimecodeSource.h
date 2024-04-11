#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
#include "MovieSceneTimecodeSource.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimecodeSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimecode Timecode;
    
    MOVIESCENE_API FMovieSceneTimecodeSource();
};

