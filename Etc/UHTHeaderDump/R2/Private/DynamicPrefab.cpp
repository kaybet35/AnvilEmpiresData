#include "DynamicPrefab.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

ADynamicPrefab::ADynamicPrefab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->CodeName = 0;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
}


