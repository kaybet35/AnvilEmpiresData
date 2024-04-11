#include "CollisionProxyComponent.h"

UCollisionProxyComponent::UCollisionProxyComponent() {
    this->SurfaceType = EAnvilPhysicalSurfaceType::SurfaceTypeDefault;
    this->CollisionMask = 0;
    this->StepAngle = 0.00f;
}


