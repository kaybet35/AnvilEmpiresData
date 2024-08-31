#include "VisController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerControllerDataComponent -FallbackName=PlayerControllerDataComponent
#include "MapMarkerComponent.h"

AVisController::AVisController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoCheckOnCeilVisibility = true;
    this->PlayerControllerDataComponent = CreateDefaultSubobject<UPlayerControllerDataComponent>(TEXT("PlayerControllerDataComponent"));
    this->DeathMarker = CreateDefaultSubobject<UMapMarkerComponent>(TEXT("DeathMarker"));
}


