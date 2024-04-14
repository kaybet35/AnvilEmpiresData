#include "VisTownCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TownHallDataComponent -FallbackName=TownHallDataComponent

AVisTownCenter::AVisTownCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TownHallDataComponent = CreateDefaultSubobject<UTownHallDataComponent>(TEXT("TownHallDataComponent"));
}


