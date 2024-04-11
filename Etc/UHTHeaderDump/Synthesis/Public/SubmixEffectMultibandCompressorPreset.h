#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectMultibandCompressorSettings.h"
#include "SubmixEffectMultibandCompressorPreset.generated.h"

class UAudioBus;
class USoundSubmix;

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectMultibandCompressorSettings Settings;
    
    USubmixEffectMultibandCompressorPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectMultibandCompressorSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalSubmix(USoundSubmix* Submix);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBus(UAudioBus* AudioBus);
    
    UFUNCTION(BlueprintCallable)
    void ResetKey();
    
};

