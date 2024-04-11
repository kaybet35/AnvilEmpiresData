#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneBaseCacheSection -FallbackName=MovieSceneBaseCacheSection
#include "MovieSceneChaosCacheParams.h"
#include "MovieSceneChaosCacheSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneChaosCacheParams Params;
    
    UMovieSceneChaosCacheSection();

};

