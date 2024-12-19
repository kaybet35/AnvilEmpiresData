#include "ConvexCollisionProxyComponent.h"

UConvexCollisionProxyComponent::UConvexCollisionProxyComponent() {
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->CollisionMask = 0;
    this->Tags = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


