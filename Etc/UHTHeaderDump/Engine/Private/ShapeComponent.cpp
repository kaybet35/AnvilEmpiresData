#include "ShapeComponent.h"

UShapeComponent::UShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bHiddenInGame = true;
    this->bCastDynamicShadow = false;
    this->bExcludeFromLightAttachmentGroup = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->ShapeBodySetup = NULL;
    this->bDrawOnlyIfSelected = false;
    this->bShouldCollideWhenPlacing = false;
    this->bDynamicObstacle = false;
    this->AreaClassOverride = NULL;
    this->bUseSystemDefaultObstacleAreaClass = true;
}


