#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "RepairProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URepairProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalRepairCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpReward;
    
    URepairProxyComponent();

};

