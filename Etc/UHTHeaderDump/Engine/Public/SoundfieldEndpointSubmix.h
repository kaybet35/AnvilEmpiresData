#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixBase.h"
#include "Templates/SubclassOf.h"
#include "SoundfieldEndpointSubmix.generated.h"

class UAudioEndpointSettingsBase;
class USoundfieldEffectBase;
class USoundfieldEncodingSettingsBase;
class USoundfieldEndpointSettingsBase;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USoundfieldEndpointSubmix : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundfieldEndpointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundfieldEndpointSettingsBase* EndpointSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundfieldEncodingSettingsBase* EncodingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain;
    
    USoundfieldEndpointSubmix();

};

