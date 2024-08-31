#include "VisTownCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TownHallDataComponent -FallbackName=TownHallDataComponent
#include "VisTownAreaMarkerDecalComponent.h"

AVisTownCenter::AVisTownCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TownHallDataComponent = CreateDefaultSubobject<UTownHallDataComponent>(TEXT("TownHallDataComponent"));
    this->TownAreaMarkerDecal = CreateDefaultSubobject<UVisTownAreaMarkerDecalComponent>(TEXT("TownAreaMarkerDecal"));
    this->TownAreaMarkerDecal->SetupAttachment(RootComponent);
}


