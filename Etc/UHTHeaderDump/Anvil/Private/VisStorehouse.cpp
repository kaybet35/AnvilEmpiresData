#include "VisStorehouse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StorehouseDataComponent -FallbackName=StorehouseDataComponent

AVisStorehouse::AVisStorehouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StorehouseDataComponent = CreateDefaultSubobject<UStorehouseDataComponent>(TEXT("StorehouseDataComponent"));
}


