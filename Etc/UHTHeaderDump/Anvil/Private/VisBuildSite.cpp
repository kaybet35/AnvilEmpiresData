#include "VisBuildSite.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=BuildSiteDataComponent -FallbackName=BuildSiteDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StructureDataComponent -FallbackName=StructureDataComponent
#include "EHUDWindowType.h"
#include "VisBuildGhostComponent.h"

AVisBuildSite::AVisBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->UseWindowType = EHUDWindowType::GenericStructure;
    this->VisBuildGhostComponent = CreateDefaultSubobject<UVisBuildGhostComponent>(TEXT("VisBuildGhostComponent"));
    this->BuildSiteDataComponent = CreateDefaultSubobject<UBuildSiteDataComponent>(TEXT("BuildSiteDataComponent"));
    this->StructureDataComponent = CreateDefaultSubobject<UStructureDataComponent>(TEXT("StructureDataComponent"));
    this->Icon = NULL;
    this->Category = EBuildSiteCategory::General;
    this->Order = 0;
    this->BuildSiteVisibility = EBuildSiteVisibility::AlwaysVisible;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->BuildCollisionDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("BuildCollisionDecalComponent"));
    this->VisualGuideMeshComponent = NULL;
    this->BuildCollisionDecalComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}


