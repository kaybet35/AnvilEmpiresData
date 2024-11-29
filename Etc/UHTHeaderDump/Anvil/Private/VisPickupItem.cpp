#include "VisPickupItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PickupDataComponent -FallbackName=PickupDataComponent

AVisPickupItem::AVisPickupItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->bUseDepthStencilForInteractionHighlight = true;
    this->PickupDataComponent = CreateDefaultSubobject<UPickupDataComponent>(TEXT("PickupDataComponent"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->LootMarkerVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LootMarkerVFX"));
    this->LootMarkerVFXComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}


