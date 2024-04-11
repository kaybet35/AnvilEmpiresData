#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneChaosCacheSectionTemplateParameters.h"
#include "MovieSceneChaosCacheSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneChaosCacheSectionTemplateParameters Params;
    
    CHAOSCACHING_API FMovieSceneChaosCacheSectionTemplate();
};

