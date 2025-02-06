#include "VisStaticTorch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CombustionDataComponent -FallbackName=CombustionDataComponent

AVisStaticTorch::AVisStaticTorch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombustionDataComponent = CreateDefaultSubobject<UCombustionDataComponent>(TEXT("CombustionDataComponent"));
}


