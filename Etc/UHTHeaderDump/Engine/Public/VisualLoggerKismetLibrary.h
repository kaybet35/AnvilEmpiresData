#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlueprintFunctionLibrary.h"
#include "VisualLoggerKismetLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVisualLoggerKismetLibrary();

    UFUNCTION(BlueprintCallable)
    static void RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogText(UObject* WorldContextObject, const FString& Text, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogSegment(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogLocation(UObject* WorldContextObject, FVector Location, const FString& Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogBox(UObject* WorldContextObject, FBox BoxShape, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable)
    static void EnableRecording(bool bEnabled);
    
};

