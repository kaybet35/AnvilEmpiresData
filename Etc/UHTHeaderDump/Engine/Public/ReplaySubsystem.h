#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystem.h"
#include "ReplaySubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UReplaySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadDefaultMapOnStop;
    
    UReplaySubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReplayCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveReplayName() const;
    
};

