#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "FamilyCenterProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UFamilyCenterProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Tier;
    
    UFamilyCenterProxyComponent();

};

