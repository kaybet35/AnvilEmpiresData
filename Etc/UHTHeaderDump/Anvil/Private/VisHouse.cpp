#include "VisHouse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HousingDataComponent -FallbackName=HousingDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerSpawnerDataComponent -FallbackName=PlayerSpawnerDataComponent

AVisHouse::AVisHouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HousingDataComponent = CreateDefaultSubobject<UHousingDataComponent>(TEXT("HousingDataComponent"));
    this->PlayerSpawnerDataComponent = CreateDefaultSubobject<UPlayerSpawnerDataComponent>(TEXT("PlayerSpawnerDataComponent"));
}


