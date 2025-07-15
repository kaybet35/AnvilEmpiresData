#include "VisLadderBuildSite.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=LadderDataComponent -FallbackName=LadderDataComponent

AVisLadderBuildSite::AVisLadderBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LadderClass = NULL;
    this->LadderDataComponent = CreateDefaultSubobject<ULadderDataComponent>(TEXT("LadderDataComponent"));
}

void AVisLadderBuildSite::UpdateLadderMesh(float HalfLength) {
}


