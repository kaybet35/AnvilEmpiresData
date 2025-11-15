#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisStub -ObjectName=NetObjectCountLimiterConfig -FallbackName=NetObjectCountLimiterConfig
#include "PlayerStateCountLimiterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPlayerStateCountLimiterConfig : public UNetObjectCountLimiterConfig {
    GENERATED_BODY()
public:
    UPlayerStateCountLimiterConfig();

};

