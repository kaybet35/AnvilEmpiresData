#pragma once
#include "CoreMinimal.h"
#include "AudioPanelWidgetInterface.h"
#include "Templates/SubclassOf.h"
#include "SoundEffectPresetWidgetInterface.generated.h"

class USoundEffectPreset;

UINTERFACE()
class ENGINE_API USoundEffectPresetWidgetInterface : public UAudioPanelWidgetInterface {
    GENERATED_BODY()
};

class ENGINE_API ISoundEffectPresetWidgetInterface : public IAudioPanelWidgetInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(USoundEffectPreset* Preset, FName PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructed(USoundEffectPreset* Preset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<USoundEffectPreset> GetClass();
    
};

