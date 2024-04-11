#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineLinearExecutorBase.h"
#include "MoviePipelineInProcessExecutor.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurrentLevel;
    
    UMoviePipelineInProcessExecutor();

};

