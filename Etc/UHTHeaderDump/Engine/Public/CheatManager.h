#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECollisionChannel.h"
#include "EEndPlayReason.h"
#include "Templates/SubclassOf.h"
#include "CheatManager.generated.h"

class AActor;
class ADebugCameraController;
class APawn;
class APlayerController;
class UCheatManagerExtension;

UCLASS(Blueprintable, Within=PlayerController)
class ENGINE_API UCheatManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugCameraController* DebugCameraControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADebugCameraController> DebugCameraControllerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCheatManagerExtension*> CheatManagerExtensions;
    
public:
    UCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void Walk();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewSelf();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewPlayer(const FString& S);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewClass(TSubclassOf<AActor> DesiredClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewActor(FName ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateSafeArea();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleServerStatReplicatorUpdateStatNet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleServerStatReplicatorClientOverwrite();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAILogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCollisionDistance();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Teleport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Summon(const FString& ClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StreamLevelOut(FName PackageName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StreamLevelIn(FName PackageName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnServerStatReplicator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Slomo(float NewTimeDilation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWorldOrigin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMouseSensitivityToDefault();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleAILogging();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitCheatManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndPlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayersOnly();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndPlayed(AActor* Player, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnlyLoadLevel(FName PackageName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogLoc();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertMouse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void God();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ghost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void FreezeFrame(float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Fly();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FlushLog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableDebugCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpVoiceMutingState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPartyState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpOnlineSessionState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpChatState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableDebugCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyServerStatReplicator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyPawns(TSubclassOf<APawn> aClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllPawnsExceptTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAll(TSubclassOf<AActor> aClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweepPawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweepClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweepCapture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCapsuleSweep();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamageTarget(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatScript(const FString& ScriptName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeSize(float F);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BugIt(const FString& ScreenShotDescription);
    
};

