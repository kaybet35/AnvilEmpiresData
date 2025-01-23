#include "VisStaticTorch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StaticTorchDataComponent -FallbackName=StaticTorchDataComponent

AVisStaticTorch::AVisStaticTorch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticTorchDataComponent = CreateDefaultSubobject<UStaticTorchDataComponent>(TEXT("StaticTorchDataComponent"));
}


