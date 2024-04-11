#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineFormatArgs.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineSetting_BlueprintBase.generated.h"

class UMoviePipeline;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidOnMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidOnShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDisabled;
    
public:
    UMoviePipelineSetting_BlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTeardownForPipelineImpl(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSetupForPipelineImpl(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMoviePipelineFormatArgs ReceiveGetFormatArguments(UPARAM(Ref) FMoviePipelineFormatArgs& InOutFormatArgs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngineTickBeginFrame();
    
};

