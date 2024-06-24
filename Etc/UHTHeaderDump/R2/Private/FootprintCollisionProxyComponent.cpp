#include "FootprintCollisionProxyComponent.h"

UFootprintCollisionProxyComponent::UFootprintCollisionProxyComponent() {
    this->Box = NULL;
    this->bAddToNavMesh = false;
    this->bUseMeshAsFootprint = false;
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->CollisionMask = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


