#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SpatializationPluginSourceSettingsBase -FallbackName=SpatializationPluginSourceSettingsBase
#include "ERaDistanceRolloffModel.h"
#include "ERaSpatializationMethod.h"
#include "ResonanceAudioSpatializationSourceSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class RESONANCEAUDIO_API UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    ERaSpatializationMethod SpatializationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float Sharpness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    ERaDistanceRolloffModel Rolloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UResonanceAudioSpatializationSourceSettings();

    UFUNCTION(BlueprintCallable)
    void SetSoundSourceSpread(float InSpread);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundSourceDirectivity(float InPattern, float InSharpness);
    
};

