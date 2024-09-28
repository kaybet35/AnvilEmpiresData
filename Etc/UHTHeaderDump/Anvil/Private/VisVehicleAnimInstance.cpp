#include "VisVehicleAnimInstance.h"

UVisVehicleAnimInstance::UVisVehicleAnimInstance() {
    this->NativeSpeed = 0.00f;
    this->NativeHorizontalMovement = 0.00f;
    this->NativeVerticalMovement = 0.00f;
    this->bIsOccupied = false;
    this->bShouldAnimateMoving = true;
}


