#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ForceFeedbackChannelDetails.h"
#include "ForceFeedbackEffect.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UForceFeedbackEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UForceFeedbackEffect();

};

