#include "SnapPointProxyComponent.h"

USnapPointProxyComponent::USnapPointProxyComponent() {
    this->ExtendFootprint = false;
    this->SnappingChannel = EAnvilSnappingChannelType::General;
    this->bPointOnLine = false;
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->CollisionMask = 0;
    this->Tags = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


