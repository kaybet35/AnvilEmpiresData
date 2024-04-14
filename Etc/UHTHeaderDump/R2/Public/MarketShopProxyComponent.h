#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "MarketShopProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UMarketShopProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoBuySeconds;
    
    UMarketShopProxyComponent();

};

