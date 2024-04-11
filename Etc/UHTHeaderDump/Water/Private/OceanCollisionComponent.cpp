#include "OceanCollisionComponent.h"

UOceanCollisionComponent::UOceanCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bCastDynamicShadow = false;
    this->bUseEditorCompositing = true;
    this->CachedBodySetup = NULL;
}


