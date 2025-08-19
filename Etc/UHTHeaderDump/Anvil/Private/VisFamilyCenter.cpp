#include "VisFamilyCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=FamilyCenterDataComponent -FallbackName=FamilyCenterDataComponent
#include "VisTownAreaMarkerDecalComponent.h"

AVisFamilyCenter::AVisFamilyCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForceShowInBuildMenuDistance = 0.00f;
    this->FamilyCenterDataComponent = CreateDefaultSubobject<UFamilyCenterDataComponent>(TEXT("FamilyCenterDataComponent"));
    this->TownAreaMarkerDecal = CreateDefaultSubobject<UVisTownAreaMarkerDecalComponent>(TEXT("TownAreaMarkerDecal"));
    this->MyFamilyFlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyFamilyFlagMesh"));
    this->TownAreaMarkerDecal->SetupAttachment(RootComponent);
    this->MyFamilyFlagMesh->SetupAttachment(RootComponent);
}


