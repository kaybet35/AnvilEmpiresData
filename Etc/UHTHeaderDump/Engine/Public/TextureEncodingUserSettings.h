#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ETextureEncodeSpeedOverride.h"
#include "TextureEncodingUserSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=EditorPerProjectUserSettings)
class ENGINE_API UTextureEncodingUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureEncodeSpeedOverride ForceEncodeSpeed;
    
    UTextureEncodingUserSettings();

};

