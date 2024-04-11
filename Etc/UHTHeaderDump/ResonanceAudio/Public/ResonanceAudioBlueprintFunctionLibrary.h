#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ResonanceAudioBlueprintFunctionLibrary.generated.h"

class UResonanceAudioReverbPluginPreset;

UCLASS(Blueprintable)
class RESONANCEAUDIO_API UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UResonanceAudioBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetGlobalReverbPreset(UResonanceAudioReverbPluginPreset* InPreset);
    
    UFUNCTION(BlueprintCallable)
    static UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
    
};

