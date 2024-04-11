#include "VisFarm.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=FarmDataComponent -FallbackName=FarmDataComponent

AVisFarm::AVisFarm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FarmDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("FarmDecalComponent"));
    this->FertilizeDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("FertilizeDecalComponent"));
    this->RoughnessStart = 0.20f;
    this->RoughnessEnd = 1.00f;
    this->FarmDataComponent = CreateDefaultSubobject<UFarmDataComponent>(TEXT("FarmDataComponent"));
    this->FarmDecalComponent->SetupAttachment(RootComponent);
    this->FertilizeDecalComponent->SetupAttachment(RootComponent);
}


