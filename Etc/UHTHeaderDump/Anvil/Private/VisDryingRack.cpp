#include "VisDryingRack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVisDryingRack::AVisDryingRack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->DryingItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DryingItemMesh"));
    this->DryingRackProxy = NULL;
    this->DryingItemMeshMaterial = NULL;
    this->DryingItemMesh->SetupAttachment(BaseMesh);
    this->BaseMesh->SetupAttachment(RootComponent);
}


