#include "VisFishingBobber.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVisFishingBobber::AVisFishingBobber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->LineComponent = CreateDefaultSubobject<UCableComponent>(TEXT("LineComponent"));
    this->IdleCurve = NULL;
    this->HookedCurve = NULL;
    this->CastOffsetZ = 0.00f;
    this->CastDelay = 0.00f;
    this->CastSpeed = 0.00f;
    this->SlackLineLengthFactor = 0.00f;
    this->TightLineLengthFactor = 0.00f;
    this->Caster = NULL;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->LineComponent->SetupAttachment(MeshComponent);
}


