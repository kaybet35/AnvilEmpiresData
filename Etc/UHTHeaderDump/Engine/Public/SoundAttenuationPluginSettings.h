#pragma once
#include "CoreMinimal.h"
#include "SoundAttenuationPluginSettings.generated.h"

class UOcclusionPluginSourceSettingsBase;
class UReverbPluginSourceSettingsBase;
class USourceDataOverridePluginSourceSettingsBase;
class USpatializationPluginSourceSettingsBase;

USTRUCT(BlueprintType)
struct ENGINE_API FSoundAttenuationPluginSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USourceDataOverridePluginSourceSettingsBase*> SourceDataOverridePluginSettingsArray;
    
    FSoundAttenuationPluginSettings();
};

