#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "MineProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UMineProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialReserveCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiningRatePerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningUpdateTime;
    
    UMineProxyComponent();

};

