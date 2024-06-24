#include "VisCentralMarketplace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CentralMarketplaceDataComponent -FallbackName=CentralMarketplaceDataComponent

AVisCentralMarketplace::AVisCentralMarketplace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CentralMarketplaceDataComponent = CreateDefaultSubobject<UCentralMarketplaceDataComponent>(TEXT("CentralMarketplaceDataComponent"));
}


