#pragma once
#include "CoreMinimal.h"
#include "SoundAttenuationSettings.h"
#include "SoundNode.h"
#include "SoundNodeAttenuation.generated.h"

class USoundAttenuation;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeAttenuation : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    USoundNodeAttenuation();

};

