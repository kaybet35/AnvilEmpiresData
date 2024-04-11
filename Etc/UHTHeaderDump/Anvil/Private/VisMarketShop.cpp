#include "VisMarketShop.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=MarketShopDataComponent -FallbackName=MarketShopDataComponent

AVisMarketShop::AVisMarketShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarketShopDataComponent = CreateDefaultSubobject<UMarketShopDataComponent>(TEXT("MarketShopDataComponent"));
}


