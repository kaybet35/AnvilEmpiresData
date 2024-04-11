#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "RoadProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URoadProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    URoadProxyComponent();

};

