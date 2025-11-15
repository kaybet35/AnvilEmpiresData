#pragma once
#include "CoreMinimal.h"
#include "GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "GameMode.generated.h"

class APlayerState;
class ULocalMessage;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ENGINE_API AGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDelayedStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpectators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTravellingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULocalMessage> EngineMessageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> InactivePlayerArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePlayerStateLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInactivePlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleDedicatedServerReplays;
    
public:
    AGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartMatch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Say(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReadyToStartMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReadyToEndMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSetMatchState(FName NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMatchState() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMatch();
    
    UFUNCTION(BlueprintCallable)
    void AbortMatch();
    
};

