#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=EscalationManagerConfig -FallbackName=EscalationManagerConfig
#include "NetFaultConfig.generated.h"

UCLASS(Blueprintable)
class UNetFaultConfig : public UEscalationManagerConfig {
    GENERATED_BODY()
public:
    UNetFaultConfig();

};

