#include "VisRelicTechCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=RelicTechCenterDataComponent -FallbackName=RelicTechCenterDataComponent

AVisRelicTechCenter::AVisRelicTechCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelicTechCenterDataComponent = CreateDefaultSubobject<URelicTechCenterDataComponent>(TEXT("RelicTechCenterDataComponent"));
}


