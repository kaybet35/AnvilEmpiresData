#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "BeaconTowerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UBeaconTowerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bViewerNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionFuelCostPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InformingFuelCostPerHour;
    
    UBeaconTowerProxyComponent();

};

