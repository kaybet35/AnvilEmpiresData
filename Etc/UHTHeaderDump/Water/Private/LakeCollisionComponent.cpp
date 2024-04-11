#include "LakeCollisionComponent.h"

ULakeCollisionComponent::ULakeCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bCastDynamicShadow = false;
    this->bUseEditorCompositing = true;
    this->CachedBodySetup = NULL;
}


