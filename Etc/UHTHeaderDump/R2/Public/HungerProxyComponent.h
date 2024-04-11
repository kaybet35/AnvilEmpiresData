#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "HungerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHungerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungerPerTick;
    
    UHungerProxyComponent();

};

