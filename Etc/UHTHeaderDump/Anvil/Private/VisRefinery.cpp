#include "VisRefinery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=RefineResourceDataComponent -FallbackName=RefineResourceDataComponent

AVisRefinery::AVisRefinery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RefineResourceDataComponent = CreateDefaultSubobject<URefineResourceDataComponent>(TEXT("RefineResourceDataComponent"));
}


