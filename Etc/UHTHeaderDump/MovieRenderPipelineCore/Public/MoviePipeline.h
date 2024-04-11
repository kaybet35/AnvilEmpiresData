#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineFinishedDelegate.h"
#include "MoviePipelineWorkFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MoviePipeline.generated.h"

class ALevelSequenceActor;
class UEngineCustomTimeStep;
class ULevelSequence;
class UMoviePipelineCustomTimeStep;
class UMoviePipelineExecutorJob;
class UMoviePipelineMasterConfig;
class UMovieRenderDebugWidget;
class UTexture;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipeline : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineFinished OnMoviePipelineFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineWorkFinished OnMoviePipelineWorkFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineWorkFinished OnMoviePipelineShotWorkFinishedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineCustomTimeStep* CustomTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEngineCustomTimeStep* CachedPrevCustomTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* TargetSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieRenderDebugWidget* DebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* PreviewTexture;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieRenderDebugWidget> DebugWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* CurrentJob;
    
public:
    UMoviePipeline();

    UFUNCTION(BlueprintCallable)
    void Shutdown(bool bError);
    
    UFUNCTION(BlueprintCallable)
    void SetInitializationTime(const FDateTime& InDateTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestShutdown(bool bIsError);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoviePipelineFinishedImpl();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShutdownRequested() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetPreviewTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineMasterConfig* GetPipelineMasterConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetInitializationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineExecutorJob* GetCurrentJob() const;
    
};

