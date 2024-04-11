#pragma once
#include "CoreMinimal.h"
#include "MoviePipelinePostProcessPass.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINERENDERPASSES_API FMoviePipelinePostProcessPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    FMoviePipelinePostProcessPass();
};

