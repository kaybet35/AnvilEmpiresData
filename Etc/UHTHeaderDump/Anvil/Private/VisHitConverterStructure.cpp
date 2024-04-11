#include "VisHitConverterStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HitConverterDataComponent -FallbackName=HitConverterDataComponent

AVisHitConverterStructure::AVisHitConverterStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitConverterDataComponent = CreateDefaultSubobject<UHitConverterDataComponent>(TEXT("HitConverterDataComponent"));
}


