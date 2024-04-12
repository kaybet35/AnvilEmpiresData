#include "CollisionVisualizerComponent.h"

UCollisionVisualizerComponent::UCollisionVisualizerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEditorCompositing = true;
    this->ShapeBodySetup = NULL;
    this->bHighlight = false;
    this->bIsCapsule = false;
}


