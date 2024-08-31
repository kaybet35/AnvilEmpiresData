#include "VisMapInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TweakableDataComponent -FallbackName=TweakableDataComponent

AVisMapInfo::AVisMapInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoCheckOnCeilVisibility = true;
    this->TweakableDataComponent = CreateDefaultSubobject<UTweakableDataComponent>(TEXT("TweakableDataComponent"));
}


