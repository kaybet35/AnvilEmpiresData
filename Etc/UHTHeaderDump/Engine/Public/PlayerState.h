#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "OnPlayerStatePawnSetDelegate.h"
#include "Templates/SubclassOf.h"
#include "UniqueNetIdRepl.h"
#include "PlayerState.generated.h"

class AActor;
class APawn;
class APlayerController;
class APlayerState;
class ULocalMessage;

UCLASS(Blueprintable, NotPlaceable)
class ENGINE_API APlayerState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Score, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerId, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 CompressedPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUpdateReplicatedPing: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsSpectator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bOnlySpectator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsABot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsInactive, meta=(AllowPrivateAccess=true))
    uint8 bIsInactive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bFromPreviousLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULocalMessage> EngineMessageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedNetworkAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStatePawnSet OnPawnSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PawnPrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerName, meta=(AllowPrivateAccess=true))
    FString PlayerNamePrivate;
    
public:
    APlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOverrideWith(APlayerState* OldPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCopyProperties(APlayerState* NewPlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniqueId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Score();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsInactive();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnPrivateDestroyed(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlyASpectator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsABot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPingInMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCompressedPing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl BP_GetUniqueId() const;
    
};

