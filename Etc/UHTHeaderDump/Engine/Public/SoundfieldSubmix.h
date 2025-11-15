#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixWithParentBase.h"
#include "Templates/SubclassOf.h"
#include "SoundfieldSubmix.generated.h"

class USoundfieldEffectBase;
class USoundfieldEncodingSettingsBase;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USoundfieldSubmix : public USoundSubmixWithParentBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundfieldEncodingFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundfieldEncodingSettingsBase* EncodingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;
    
    USoundfieldSubmix();

};

