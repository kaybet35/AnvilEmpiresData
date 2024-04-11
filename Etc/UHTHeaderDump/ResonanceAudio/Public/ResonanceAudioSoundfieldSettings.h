#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundfieldEncodingSettingsBase -FallbackName=SoundfieldEncodingSettingsBase
#include "EResonanceRenderMode.h"
#include "ResonanceAudioSoundfieldSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RESONANCEAUDIO_API UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResonanceRenderMode RenderMode;
    
    UResonanceAudioSoundfieldSettings();

};

