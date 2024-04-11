#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineRenderPassOutputData.generated.h"

USTRUCT(BlueprintType)
struct FMoviePipelineRenderPassOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FilePaths;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineRenderPassOutputData();
};

