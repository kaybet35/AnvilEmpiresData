#include "VisLatticeMineChunk.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVisLatticeMineChunk::AVisLatticeMineChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->ChunkMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChunkMesh"));
    this->ChunkMesh->SetupAttachment(RootComponent);
}


