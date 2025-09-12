#include "VisBoat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ShipMovementDataComponent -FallbackName=ShipMovementDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=VehicleSeatDataComponent -FallbackName=VehicleSeatDataComponent

AVisBoat::AVisBoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsInWaterCheckRange = 200.00f;
    this->ShipMovementDataComponent = CreateDefaultSubobject<UShipMovementDataComponent>(TEXT("ShipMovementDataComponent"));
    this->HelmsmanSeat = CreateDefaultSubobject<UVehicleSeatDataComponent>(TEXT("HelmsmanSeat"));
    this->GangplankLeftMesh = NULL;
    this->GangplankRightMesh = NULL;
}


