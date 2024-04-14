#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "WindMillProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UWindMillProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAcceleration;
    
    UWindMillProxyComponent();

};

