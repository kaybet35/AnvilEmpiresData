#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisMarketShop.generated.h"

class UMarketShopDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisMarketShop : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarketShopDataComponent* MarketShopDataComponent;
    
    AVisMarketShop(const FObjectInitializer& ObjectInitializer);

};

