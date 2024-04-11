#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineShotOutputData.h"
#include "MoviePipelineOutputData.generated.h"

class UMoviePipeline;
class UMoviePipelineExecutorJob;

USTRUCT(BlueprintType)
struct FMoviePipelineOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipeline* Pipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* Job;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoviePipelineShotOutputData> ShotData;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineOutputData();
};

