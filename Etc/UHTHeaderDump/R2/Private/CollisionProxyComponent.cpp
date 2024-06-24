#include "CollisionProxyComponent.h"

UCollisionProxyComponent::UCollisionProxyComponent() {
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->CollisionMask = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


