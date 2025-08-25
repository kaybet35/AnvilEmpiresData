#pragma once
#include "CoreMinimal.h"
#include "BoundingBox.h"
#include "ProxyComponent.h"
#include "R2FloatRange.h"
#include "SiegeTowerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API USiegeTowerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseRampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampOpenSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2FloatRange ValidRampAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoundingBox RampOperationBox;
    
    USiegeTowerProxyComponent();

};

