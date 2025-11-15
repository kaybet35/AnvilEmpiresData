#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ForceFeedbackAttenuationSettings.h"
#include "ForceFeedbackAttenuation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UForceFeedbackAttenuation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceFeedbackAttenuationSettings Attenuation;
    
    UForceFeedbackAttenuation();

};

