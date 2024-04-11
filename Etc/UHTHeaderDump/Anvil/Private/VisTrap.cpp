#include "VisTrap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TrapDataComponent -FallbackName=TrapDataComponent

AVisTrap::AVisTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->TriggeredAnimation = NULL;
    this->TrapDataComponent = CreateDefaultSubobject<UTrapDataComponent>(TEXT("TrapDataComponent"));
    this->Mesh->SetupAttachment(RootComponent);
}


