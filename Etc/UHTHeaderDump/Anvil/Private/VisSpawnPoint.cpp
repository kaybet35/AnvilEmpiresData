#include "VisSpawnPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerSpawnerDataComponent -FallbackName=PlayerSpawnerDataComponent

AVisSpawnPoint::AVisSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoCheckOnCeilVisibility = true;
    this->PlayerSpawnerDataComponent = CreateDefaultSubobject<UPlayerSpawnerDataComponent>(TEXT("PlayerSpawnerProxyComponent"));
}


