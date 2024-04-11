#include "AnvilWaterPlane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AAnvilWaterPlane::AAnvilWaterPlane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->Arrow = (UArrowComponent*)RootComponent;
    this->WaterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->WaterMesh->SetupAttachment(RootComponent);
}


