#include "VisResource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlantGrowthDataComponent -FallbackName=PlantGrowthDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ResourceDataComponent -FallbackName=ResourceDataComponent

AVisResource::AVisResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->bNoCheckOnCeilVisibility = true;
    this->ResourceDataComponent = CreateDefaultSubobject<UResourceDataComponent>(TEXT("ResourceDataComponent"));
    this->PlantGrowthComponent = CreateDefaultSubobject<UPlantGrowthDataComponent>(TEXT("PlantGrowthComponent"));
    this->bApplyIdBasedRandomRotation = false;
    this->bProjectAndRotateToLandscape = false;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ShakeCurve = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


