#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "GateProxyComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UGateProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCloseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCloseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BreachProbCurve;
    
    UGateProxyComponent();

};

