#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TraceUtilLibrary.generated.h"

UCLASS(Blueprintable)
class TRACEUTILITIES_API UTraceUtilLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTraceUtilLibrary();

    UFUNCTION(BlueprintCallable)
    static void TraceMarkRegionStart(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void TraceMarkRegionEnd(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void TraceBookmark(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool ToggleChannel(const FString& ChannelName, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static bool StopTracing();
    
    UFUNCTION(BlueprintCallable)
    static bool StartTraceToFile(const FString& Filename, const TArray<FString>& Channels);
    
    UFUNCTION(BlueprintCallable)
    static bool StartTraceSendTo(const FString& Target, const TArray<FString>& Channels);
    
    UFUNCTION(BlueprintCallable)
    static bool ResumeTracing();
    
    UFUNCTION(BlueprintCallable)
    static bool PauseTracing();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTracing();
    
    UFUNCTION(BlueprintCallable)
    static bool IsChannelEnabled(const FString& ChannelName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetEnabledChannels();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllChannels();
    
};

