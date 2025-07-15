#include "VisDryingRack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=DryingRackDataComponent -FallbackName=DryingRackDataComponent

AVisDryingRack::AVisDryingRack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->DryingItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DryingItemMesh"));
    this->DryingRackProxy = NULL;
    this->DryingRackDataComponent = CreateDefaultSubobject<UDryingRackDataComponent>(TEXT("DryingRackDataComponent"));
    this->DryingItemMeshMaterial = NULL;
    this->BaseMesh->SetupAttachment(RootComponent);
    this->DryingItemMesh->SetupAttachment(BaseMesh);
}


