#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnvilClientVoiceClient.generated.h"

UCLASS(Blueprintable)
class ANVIL_API UAnvilClientVoiceClient : public UObject {
    GENERATED_BODY()
public:
    UAnvilClientVoiceClient();

    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabledStateFromLocalSave();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayVoiceInBackgroundEnabled(const bool InPlayVoiceInBackground);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetInputVolume(const float Volume);
    
    UFUNCTION(BlueprintCallable)
    void Reconnect();
    
};

