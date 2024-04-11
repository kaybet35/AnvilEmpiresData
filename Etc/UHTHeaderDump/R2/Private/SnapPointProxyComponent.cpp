#include "SnapPointProxyComponent.h"

USnapPointProxyComponent::USnapPointProxyComponent() {
    this->ExtendFootprint = false;
    this->SnappingChannel = EAnvilSnappingChannelType::General;
    this->bPointOnLine = false;
    this->bNoOverlap = false;
    this->SurfaceType = EAnvilPhysicalSurfaceType::SurfaceTypeDefault;
    this->CollisionMask = 0;
    this->StepAngle = 0.00f;
}


