#include "VisTreeFall.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TreeFallDataComponent -FallbackName=TreeFallDataComponent

AVisTreeFall::AVisTreeFall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("CreateDefaultSubobject"));
    this->bNoCheckOnCeilVisibility = true;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->TreeTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TreeTop"));
    this->FallCurve = NULL;
    this->TreeFallDataComponent = CreateDefaultSubobject<UTreeFallDataComponent>(TEXT("TreeFallDataComponent"));
    this->TreeTop->SetupAttachment(RootComponent);
}


