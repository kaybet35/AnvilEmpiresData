#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "PowerMillProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UPowerMillProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAcceleration;
    
    UPowerMillProxyComponent();

};

