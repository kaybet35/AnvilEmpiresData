#include "MarketShopDataComponent.h"

UMarketShopDataComponent::UMarketShopDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SilverStored = 0;
    this->MinItemPrice = 0;
    this->MaxItemPrice = 0;
}


