#include "VisCookingStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CookingDataComponent -FallbackName=CookingDataComponent

AVisCookingStructure::AVisCookingStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CookingDataComponent = CreateDefaultSubobject<UCookingDataComponent>(TEXT("CookingDataComponent"));
}


