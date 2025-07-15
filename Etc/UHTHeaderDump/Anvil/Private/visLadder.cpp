#include "visLadder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=LadderDataComponent -FallbackName=LadderDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TeamDataComponent -FallbackName=TeamDataComponent

AvisLadder::AvisLadder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->TeamDataComponent = CreateDefaultSubobject<UTeamDataComponent>(TEXT("TeamDataComponent"));
    this->LadderDataComponent = CreateDefaultSubobject<ULadderDataComponent>(TEXT("LadderDataComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->LadderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ConvertedItemMeshComponent"));
    this->LadderMesh->SetupAttachment(RootComponent);
}

void AvisLadder::UpdateLadderMesh(float HalfLength) {
}


