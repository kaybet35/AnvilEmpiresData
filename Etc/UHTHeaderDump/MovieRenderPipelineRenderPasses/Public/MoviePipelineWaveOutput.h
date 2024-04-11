#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineOutputBase -FallbackName=MoviePipelineOutputBase
#include "MoviePipelineWaveOutput.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineWaveOutput : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameFormatOverride;
    
    UMoviePipelineWaveOutput();

};

