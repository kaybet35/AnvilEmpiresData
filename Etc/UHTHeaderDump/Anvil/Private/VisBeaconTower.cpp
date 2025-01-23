#include "VisBeaconTower.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=BeaconTowerDataComponent -FallbackName=BeaconTowerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CombustionDataComponent -FallbackName=CombustionDataComponent

AVisBeaconTower::AVisBeaconTower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTowerDataComponent = CreateDefaultSubobject<UBeaconTowerDataComponent>(TEXT("BeaconTowerDataComponent"));
    this->CombustionDataComponent = CreateDefaultSubobject<UCombustionDataComponent>(TEXT("CombustionDataComponent"));
}


