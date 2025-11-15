#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "Templates/SubclassOf.h"
#include "GameStateBase.generated.h"

class AController;
class AGameModeBase;
class APlayerState;
class ASpectatorPawn;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class ENGINE_API AGameStateBase : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameModeClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameModeBase> GameModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameModeBase* AuthorityGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpectatorClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> SpectatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> PlayerArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedHasBegunPlay, meta=(AllowPrivateAccess=true))
    bool bReplicatedHasBegunPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedWorldTimeSeconds, meta=(AllowPrivateAccess=true))
    float ReplicatedWorldTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerWorldTimeSecondsDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerWorldTimeSecondsUpdateFrequency;
    
public:
    AGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpectatorClass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedWorldTimeSeconds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedHasBegunPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameModeClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBegunPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerWorldTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerStartTime(AController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerRespawnDelay(AController* Controller) const;
    
};

