#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineImageSequenceOutputBase.h"
#include "MoviePipelineImageSequenceOutput_PNG.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWriteAlpha;
    
    UMoviePipelineImageSequenceOutput_PNG();

};

