#include "VehicleMovementDataComponent.h"

UVehicleMovementDataComponent::UVehicleMovementDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationalSpeedYaw = 0.00f;
    this->AttachedTargetId = 0;
    this->SeatOccupancyBits = 0;
}


