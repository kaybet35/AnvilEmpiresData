#include "FoliageInstancedStaticMeshComponent.h"

UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseTranslatedInstanceSpace = true;
    this->bEnableDiscardOnLoad = false;
}


