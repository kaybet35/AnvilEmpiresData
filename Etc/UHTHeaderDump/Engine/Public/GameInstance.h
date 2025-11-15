#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=ENetworkFailure -FallbackName=ENetworkFailure
#include "ETravelFailure.h"
#include "OnPawnControllerChangedDelegate.h"
#include "OnUserInputDeviceConnectionChangeDelegate.h"
#include "OnUserInputDevicePairingChangeDelegate.h"
#include "GameInstance.generated.h"

class ULocalPlayer;
class UOnlineSession;

UCLASS(Blueprintable, Transient, Config=Game)
class ENGINE_API UGameInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULocalPlayer*> LocalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnlineSession* OnlineSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReferencedObjects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnControllerChanged OnPawnControllerChangedDelegates;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInputDeviceConnectionChange OnInputDeviceConnectionChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInputDevicePairingChange OnUserInputDevicePairingChange;
    
    UGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTravelError(TEnumAsByte<ETravelFailure::Type> FailureType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNetworkError(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRemovePlayer(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreatePlayer(int32 ControllerId);
    
};

