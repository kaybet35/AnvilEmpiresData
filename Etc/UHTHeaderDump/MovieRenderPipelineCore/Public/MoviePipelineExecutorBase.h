#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineHttpResponseRecievedDelegate.h"
#include "MoviePipelineSocketMessageRecievedDelegate.h"
#include "OnMoviePipelineExecutorErroredDelegate.h"
#include "OnMoviePipelineExecutorFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineExecutorBase.generated.h"

class UMoviePipeline;
class UMoviePipelineQueue;
class UMovieRenderDebugWidget;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoviePipelineExecutorFinished OnExecutorFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoviePipelineExecutorErrored OnExecutorErroredDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineSocketMessageRecieved SocketMessageRecievedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineHttpResponseRecieved HTTPResponseRecievedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieRenderDebugWidget> DebugWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoviePipeline> TargetPipelineClass;
    
public:
    UMoviePipelineExecutorBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetMoviePipelineClass(UClass* InPipelineClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SendSocketMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    int32 SendHTTPRequest(const FString& InURL, const FString& InVerb, const FString& InMessage, const TMap<FString, FString>& InHeaders);
    
    UFUNCTION(BlueprintCallable)
    void OnExecutorFinishedImpl();
    
    UFUNCTION(BlueprintCallable)
    void OnExecutorErroredImpl(UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginFrame();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSocketConnected() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(UMoviePipelineQueue* InPipelineQueue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisconnectSocket();
    
    UFUNCTION(BlueprintCallable)
    bool ConnectSocket(const FString& InHostName, const int32 InPort);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelCurrentJob();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelAllJobs();
    
};

