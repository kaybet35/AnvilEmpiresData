#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneBaseCacheSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneBaseCacheSectionTemplateParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionEndTime;
    
    MOVIESCENETRACKS_API FMovieSceneBaseCacheSectionTemplateParameters();
};

