#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineFormatArgs.generated.h"

class UMoviePipelineExecutorJob;

USTRUCT(BlueprintType)
struct FMoviePipelineFormatArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FilenameArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FileMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* InJob;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineFormatArgs();
};

