#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixBase.h"
#include "Templates/SubclassOf.h"
#include "EndpointSubmix.generated.h"

class UAudioEndpointSettingsBase;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UEndpointSubmix : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndpointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioEndpointSettingsBase* EndpointSettings;
    
    UEndpointSubmix();

};

