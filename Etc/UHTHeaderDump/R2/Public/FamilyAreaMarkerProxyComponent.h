#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "FamilyAreaMarkerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UFamilyAreaMarkerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClaimTownCurrencyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsFamilyAreaCore;
    
    UFamilyAreaMarkerProxyComponent();

};

