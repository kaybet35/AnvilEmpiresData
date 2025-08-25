#include "VisBoat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ShipMovementDataComponent -FallbackName=ShipMovementDataComponent

AVisBoat::AVisBoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsInWaterCheckRange = 200.00f;
    this->ShipMovementDataComponent = CreateDefaultSubobject<UShipMovementDataComponent>(TEXT("ShipMovementDataComponent"));
    this->GangplankLeftMesh = NULL;
    this->GangplankRightMesh = NULL;
}


