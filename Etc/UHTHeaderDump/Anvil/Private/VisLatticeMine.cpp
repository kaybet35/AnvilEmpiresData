#include "VisLatticeMine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=LatticeMineDataComponent -FallbackName=LatticeMineDataComponent

AVisLatticeMine::AVisLatticeMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("MeshVisibilityArea"));
    this->bNoCheckOnCeilVisibility = true;
    this->LatticeAreaVisualizer = (UBoxComponent*)RootComponent;
    this->LatticeMineProxyComponent = NULL;
    this->LatticeMineDataComponent = CreateDefaultSubobject<ULatticeMineDataComponent>(TEXT("LatticeMineDataComponent"));
}


