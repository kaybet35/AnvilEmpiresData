#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MoviePipelineWorkFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineQueueEngineSubsystem.generated.h"

class ULevelSequence;
class UMoviePipelineExecutorBase;
class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;
class UMovieRenderDebugWidget;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineWorkFinished OnRenderFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorBase* ActiveExecutor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineQueue* CurrentQueue;
    
public:
    UMoviePipelineQueueEngineSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetConfiguration(TSubclassOf<UMovieRenderDebugWidget> InProgressWidgetClass, const bool bRenderPlayerViewport);
    
    UFUNCTION(BlueprintCallable)
    void RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<UMoviePipelineExecutorBase> InExecutorType);
    
    UFUNCTION(BlueprintCallable)
    void RenderJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineQueue* GetQueue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineExecutorBase* GetActiveExecutor() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* AllocateJob(ULevelSequence* InSequence);
    
};

