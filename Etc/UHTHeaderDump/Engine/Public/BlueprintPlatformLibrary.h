#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "BlueprintFunctionLibrary.h"
#include "EScreenOrientation.h"
#include "BlueprintPlatformLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintPlatformLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetAllowedDeviceOrientation(TEnumAsByte<EScreenOrientation::Type> NewAllowedDeviceOrientation);
    
    UFUNCTION(BlueprintCallable)
    static int32 ScheduleLocalNotificationFromNow(int32 inSecondsFromNow, const FText& Title, const FText& Body, const FText& Action, const FString& ActivationEvent);
    
    UFUNCTION(BlueprintCallable)
    static void ScheduleLocalNotificationBadgeFromNow(int32 inSecondsFromNow, const FString& ActivationEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 ScheduleLocalNotificationBadgeAtTime(const FDateTime& FireDateTime, bool LocalTime, const FString& ActivationEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 ScheduleLocalNotificationAtTime(const FDateTime& FireDateTime, bool LocalTime, const FText& Title, const FText& Body, const FText& Action, const FString& ActivationEvent);
    
    UFUNCTION(BlueprintCallable)
    static void GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32& FireDate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EScreenOrientation::Type> GetDeviceOrientation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EScreenOrientation::Type> GetAllowedDeviceOrientation();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllLocalNotifications();
    
    UFUNCTION(BlueprintCallable)
    static void CancelLocalNotificationById(int32 NotificationId);
    
    UFUNCTION(BlueprintCallable)
    static void CancelLocalNotification(const FString& ActivationEvent);
    
};

