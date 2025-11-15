#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EInputDeviceConnectionState -FallbackName=EInputDeviceConnectionState
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "BlueprintFunctionLibrary.h"
#include "PlatformInputDeviceMapperLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UPlatformInputDeviceMapperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlatformInputDeviceMapperLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlatformUserId PlatformUserId_None();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_PlatformUserId(FPlatformUserId A, FPlatformUserId B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_InputDeviceId(FInputDeviceId A, FInputDeviceId B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPlatformId(FPlatformUserId UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidInputDevice(FInputDeviceId DeviceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnpairedUserId(const FPlatformUserId PlatformId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputDeviceMappedToUnpairedUser(const FInputDeviceId InputDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputDeviceId InputDeviceId_None();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlatformUserId GetUserForUnpairedInputDevices();
    
    UFUNCTION(BlueprintCallable)
    static FPlatformUserId GetUserForInputDevice(FInputDeviceId DeviceID);
    
    UFUNCTION(BlueprintCallable)
    static FInputDeviceId GetPrimaryInputDeviceForUser(FPlatformUserId UserId);
    
    UFUNCTION(BlueprintCallable)
    static EInputDeviceConnectionState GetInputDeviceConnectionState(const FInputDeviceId DeviceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputDeviceId GetDefaultInputDevice();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllInputDevicesForUser(const FPlatformUserId UserId, TArray<FInputDeviceId>& OutInputDevices);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllInputDevices(TArray<FInputDeviceId>& OutInputDevices);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllConnectedInputDevices(TArray<FInputDeviceId>& OutInputDevices);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllActiveUsers(TArray<FPlatformUserId>& OutUsers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PlatformUserId(FPlatformUserId A, FPlatformUserId B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_InputDeviceId(FInputDeviceId A, FInputDeviceId B);
    
};

