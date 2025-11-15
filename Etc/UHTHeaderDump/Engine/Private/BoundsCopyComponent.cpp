#include "BoundsCopyComponent.h"

UBoundsCopyComponent::UBoundsCopyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bUseCollidingComponentsForSourceBounds = false;
    this->bKeepOwnBoundsScale = false;
    this->bUseCollidingComponentsForOwnBounds = false;
    this->bCopyXBounds = true;
    this->bCopyYBounds = true;
    this->bCopyZBounds = true;
}


