#pragma once
#include "CoreMinimal.h"
#include "EEXRCompressionFormat.h"
#include "MoviePipelineImageSequenceOutputBase.h"
#include "MoviePipelineImageSequenceOutput_EXR.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEXRCompressionFormat Compression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultilayer;
    
    UMoviePipelineImageSequenceOutput_EXR();

};

