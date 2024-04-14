#include "AnimalAIProxyComponent.h"

UAnimalAIProxyComponent::UAnimalAIProxyComponent() {
    this->VisionRange = 1000.00f;
    this->VisionAngle = 180.00f;
    this->SlowSpeed = 100.00f;
    this->FastSpeed = 900.00f;
    this->Acceleration = 1000.00f;
    this->RotationSpeed = 250.00f;
    this->TrapTime = 340282346638528859811704183484516925440.00f;
    this->WalkingTime = 5.00f;
    this->bHoming = false;
    this->HomingDistance = 0.00f;
}


