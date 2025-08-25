#include "CollisionProxyComponent.h"

UCollisionProxyComponent::UCollisionProxyComponent() {
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->TargetArea = EAnvilTargetAreaType::None;
    this->CollisionMask = 0;
    this->Tags = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


