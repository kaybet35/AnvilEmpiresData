#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "StaticTorchProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UStaticTorchProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveSecondsPerUnitFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightShroudRadius;
    
    UStaticTorchProxyComponent();

};

