#include "VisLatticeMine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AVisLatticeMine::AVisLatticeMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LatticeArea = CreateDefaultSubobject<UBoxComponent>(TEXT("MeshVisibilityArea"));
}


