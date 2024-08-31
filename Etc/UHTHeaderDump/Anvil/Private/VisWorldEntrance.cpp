#include "VisWorldEntrance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "GrassRemovalVolumeComponent.h"

AVisWorldEntrance::AVisWorldEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->bNoCheckOnCeilVisibility = true;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->GrassRemovalVolume = CreateDefaultSubobject<UGrassRemovalVolumeComponent>(TEXT("GrassRemovalVolume"));
    this->GrassRemovalVolume->SetupAttachment(RootComponent);
}


