#include "MeshCollisionProxyComponent.h"

UMeshCollisionProxyComponent::UMeshCollisionProxyComponent() {
    this->PhysicsAssetName = NULL;
    this->ProjectToLandscape = 0;
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->CollisionMask = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


