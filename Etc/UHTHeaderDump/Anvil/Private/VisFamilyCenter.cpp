#include "VisFamilyCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=FamilyCenterDataComponent -FallbackName=FamilyCenterDataComponent

AVisFamilyCenter::AVisFamilyCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyCenterDataComponent = CreateDefaultSubobject<UFamilyCenterDataComponent>(TEXT("FamilyCenterDataComponent"));
    this->BuildAreaDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("BuildAreaDecalComponent"));
    this->BuildAreaDecalComponent->SetupAttachment(RootComponent);
}


