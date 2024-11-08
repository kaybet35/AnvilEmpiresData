#include "VisFamilyCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=FamilyCenterDataComponent -FallbackName=FamilyCenterDataComponent
#include "VisTownAreaMarkerDecalComponent.h"

AVisFamilyCenter::AVisFamilyCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyCenterDataComponent = CreateDefaultSubobject<UFamilyCenterDataComponent>(TEXT("FamilyCenterDataComponent"));
    this->TownAreaMarkerDecal = CreateDefaultSubobject<UVisTownAreaMarkerDecalComponent>(TEXT("TownAreaMarkerDecal"));
    this->TownAreaMarkerDecal->SetupAttachment(RootComponent);
}


