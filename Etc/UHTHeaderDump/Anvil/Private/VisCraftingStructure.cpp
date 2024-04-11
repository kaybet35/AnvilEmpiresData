#include "VisCraftingStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CraftingDataComponent -FallbackName=CraftingDataComponent

AVisCraftingStructure::AVisCraftingStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraftingDataComponent = CreateDefaultSubobject<UCraftingDataComponent>(TEXT("CraftingDataComponent"));
}


