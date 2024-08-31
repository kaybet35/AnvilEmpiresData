#include "VisEntityPrefab.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AVisEntityPrefab::AVisEntityPrefab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->bNoCheckOnCeilVisibility = true;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->MeshVisibilityArea = CreateDefaultSubobject<UBoxComponent>(TEXT("MeshVisibilityArea"));
    this->MeshVisibilityArea->SetupAttachment(RootComponent);
}


