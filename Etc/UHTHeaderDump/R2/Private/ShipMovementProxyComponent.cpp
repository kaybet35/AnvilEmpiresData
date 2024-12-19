#include "ShipMovementProxyComponent.h"

UShipMovementProxyComponent::UShipMovementProxyComponent() {
    this->BuoyancyMeshCollisionAssetName = NULL;
    this->MaxRudderAngle = 35.00f;
    this->RudderTurnRate = 45.00f;
    this->DragReferenceSpeed = 0.00f;
    this->Fp = 0.00f;
    this->Fs = 0.00f;
    this->Cpd1 = 0.00f;
    this->Cpd2 = 0.00f;
    this->Csd1 = 0.00f;
    this->Csd2 = 0.00f;
    this->SlammingPower = 0.00f;
    this->GammaMax = 0.00f;
    this->ThrustVectoringPercent = 0.00f;
}


