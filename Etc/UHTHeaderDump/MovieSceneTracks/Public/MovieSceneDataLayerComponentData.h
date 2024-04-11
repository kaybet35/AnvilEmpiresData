#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDataLayerComponentData.generated.h"

class UMovieSceneDataLayerSection;

USTRUCT(BlueprintType)
struct FMovieSceneDataLayerComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneDataLayerSection* Section;
    
    MOVIESCENETRACKS_API FMovieSceneDataLayerComponentData();
};

