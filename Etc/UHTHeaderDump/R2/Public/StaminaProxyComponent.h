#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "StaminaProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UStaminaProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenSpeed;
    
    UStaminaProxyComponent();

};

