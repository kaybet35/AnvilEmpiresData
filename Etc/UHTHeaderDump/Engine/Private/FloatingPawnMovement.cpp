#include "FloatingPawnMovement.h"

UFloatingPawnMovement::UFloatingPawnMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpeed = 1200.00f;
    this->Acceleration = 4000.00f;
    this->Deceleration = 8000.00f;
    this->TurningBoost = 8.00f;
    this->bPositionCorrected = false;
}


