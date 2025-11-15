#include "VisEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=LifetimeDataComponent -FallbackName=LifetimeDataComponent

AVisEffect::AVisEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->bClientSideDestruction = true;
    this->AttachTarget = NULL;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->LifetimeDataComponent = CreateDefaultSubobject<ULifetimeDataComponent>(TEXT("LifetimeDataComponent"));
    this->bSeekAudioComponent = false;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->NiagaraComponent->SetupAttachment(RootComponent);
}


