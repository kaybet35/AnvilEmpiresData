#include "VisItemStash.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

AVisItemStash::AVisItemStash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->LootMarkerVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LootMarkerVFX"));
    this->LootMarkerVFXComponent->SetupAttachment(RootComponent);
}


