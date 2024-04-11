#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneBaseCacheParams -FallbackName=MovieSceneBaseCacheParams
#include "MovieSceneChaosCacheParams.generated.h"

class UChaosCacheCollection;

USTRUCT(BlueprintType)
struct CHAOSCACHING_API FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosCacheCollection* CacheCollection;
    
    FMovieSceneChaosCacheParams();
};

