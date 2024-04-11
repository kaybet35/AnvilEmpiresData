#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineExecutorBase.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelinePythonHostExecutor.generated.h"

class UMoviePipelinePythonHostExecutor;
class UMoviePipelineQueue;
class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoviePipelinePythonHostExecutor> ExecutorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineQueue* PipelineQueue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* LastLoadedWorld;
    
public:
    UMoviePipelinePythonHostExecutor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMapLoad(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetLastLoadedWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteDelayed(UMoviePipelineQueue* InPipelineQueue);
    
};

