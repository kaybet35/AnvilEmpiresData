#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Info.h"
#include "Templates/SubclassOf.h"
#include "GameModeBase.generated.h"

class AActor;
class AController;
class AGameSession;
class AGameStateBase;
class AHUD;
class APawn;
class APlayerController;
class APlayerState;
class AServerStatReplicator;
class ASpectatorPawn;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class ENGINE_API AGameModeBase : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameSession> GameSessionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameStateBase> GameStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerController> PlayerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerState> PlayerStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHUD> HUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> SpectatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerController> ReplaySpectatorPlayerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AServerStatReplicator> ServerStatReplicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameSession* GameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameStateBase* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AServerStatReplicator* ServerStatReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSeamlessTravel: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartPlayersAsSpectators: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPauseable: 1;
    
public:
    AGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldReset(AActor* ActorToReset);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenuHost();
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayerAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayer(AController* NewPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ResetLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerCanRestart(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MustSpectate(APlayerController* NewPlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PostLogin(APlayerController* NewPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnRestartPlayer(AController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLogout(AController* ExitingController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChangeName(AController* Other, const FString& NewName, bool bNameChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* K2_FindPlayerStart(AController* Player, const FString& IncomingName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitStartSpot(AActor* StartSpot, AController* NewPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeHUDForPlayer(APlayerController* NewPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleStartingNewPlayer(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSpectators();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetDefaultPawnClassForController(AController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* FindPlayerStart(AController* Player, const FString& IncomingName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* ChoosePlayerStart(AController* Player);
    
    UFUNCTION(BlueprintCallable)
    void ChangeName(AController* Controller, const FString& NewName, bool bNameChange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget);
    
};

