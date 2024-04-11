#include "SphericalPontoon.h"

FSphericalPontoon::FSphericalPontoon() {
    this->Radius = 0.00f;
    this->bFXEnabled = false;
    this->WaterHeight = 0.00f;
    this->WaterDepth = 0.00f;
    this->ImmersionDepth = 0.00f;
    this->WaterBodyIndex = 0;
    this->bIsInWater = false;
    this->CurrentWaterBodyComponent = NULL;
}

