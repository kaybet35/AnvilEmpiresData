#include "RepMovement.h"

FRepMovement::FRepMovement() {
    this->bSimulatedPhysicSleep = false;
    this->bRepPhysics = false;
    this->ServerFrame = 0;
    this->ServerPhysicsHandle = 0;
    this->LocationQuantizationLevel = EVectorQuantization::RoundWholeNumber;
    this->VelocityQuantizationLevel = EVectorQuantization::RoundWholeNumber;
    this->RotationQuantizationLevel = ERotatorQuantization::ByteComponents;
}

