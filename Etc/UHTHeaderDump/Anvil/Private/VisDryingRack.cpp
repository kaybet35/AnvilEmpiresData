#include "VisDryingRack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=DryingRackDataComponent -FallbackName=DryingRackDataComponent

AVisDryingRack::AVisDryingRack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->DryingItemMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DryingItemMesh"));
    this->DryingRackProxy = NULL;
    this->DryingRackDataComponent = CreateDefaultSubobject<UDryingRackDataComponent>(TEXT("DryingRackDataComponent"));
    this->DryingRackAssetTable = NULL;
    this->DryingItemMeshComponent->SetupAttachment(BaseMeshComponent);
    this->BaseMeshComponent->SetupAttachment(RootComponent);
}

void AVisDryingRack::OnItemAssetLoaded() {
}


