#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "RichSoilProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URichSoilProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    URichSoilProxyComponent();

};

