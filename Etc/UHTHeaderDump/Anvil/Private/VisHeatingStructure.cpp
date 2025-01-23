#include "VisHeatingStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CombustionDataComponent -FallbackName=CombustionDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HeatingDataComponent -FallbackName=HeatingDataComponent

AVisHeatingStructure::AVisHeatingStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeatingDataComponent = CreateDefaultSubobject<UHeatingDataComponent>(TEXT("HeatingDataComponent"));
    this->CombustionDataComponent = CreateDefaultSubobject<UCombustionDataComponent>(TEXT("CombustionDataComponent"));
}


