#include "ImpactSurfaceDataComponent.h"

UImpactSurfaceDataComponent::UImpactSurfaceDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitSurface = EAnvilPhysicalSurfaceType::SurfaceTypeDefault;
}


