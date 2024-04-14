#include "VisStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HealthDataComponent -FallbackName=HealthDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ScorchDataComponent -FallbackName=ScorchDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StructureDataComponent -FallbackName=StructureDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TeamDataComponent -FallbackName=TeamDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=UpgradeDataComponent -FallbackName=UpgradeDataComponent
#include "GrassRemovalVolumeComponent.h"
#include "VisScaffoldingComponent.h"

AVisStructure::AVisStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ScaffoldingComponent = CreateDefaultSubobject<UVisScaffoldingComponent>(TEXT("ScaffoldingComponent"));
    this->StructureIcon = NULL;
    this->BuildSiteCategory = EBuildSiteCategory::General;
    this->BuildSiteOrder = 0;
    this->BuildSiteVisibility = EBuildSiteVisibility::AlwaysVisible;
    this->UpgradeDataComponent = CreateDefaultSubobject<UUpgradeDataComponent>(TEXT("UpgradeDataComponent"));
    this->HealthDataComponent = CreateDefaultSubobject<UHealthDataComponent>(TEXT("HealthDataComponent"));
    this->TeamDataComponent = CreateDefaultSubobject<UTeamDataComponent>(TEXT("TeamDataComponent"));
    this->StructureDataComponent = CreateDefaultSubobject<UStructureDataComponent>(TEXT("StructureDataComponent"));
    this->ScorchDataComponent = CreateDefaultSubobject<UScorchDataComponent>(TEXT("ScorchDataComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->UseVolumeDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("UseVolumeDecalComponent"));
    this->GrassRemovalVolume = CreateDefaultSubobject<UGrassRemovalVolumeComponent>(TEXT("GrassRemovalVolume"));
    this->GeneratedScorchEffects = 0;
    this->GrassRemovalVolume->SetupAttachment(RootComponent);
    this->ScaffoldingComponent->SetupAttachment(RootComponent);
    this->UseVolumeDecalComponent->SetupAttachment(RootComponent);
}


