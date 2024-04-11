#include "CapsuleCollisionProxyComponent.h"

UCapsuleCollisionProxyComponent::UCapsuleCollisionProxyComponent() {
    this->Radius = 0.00f;
    this->HalfHeight = 0.00f;
    this->SurfaceType = EAnvilPhysicalSurfaceType::SurfaceTypeDefault;
    this->CollisionMask = 0;
    this->StepAngle = 0.00f;
}


