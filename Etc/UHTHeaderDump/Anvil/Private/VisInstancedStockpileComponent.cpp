#include "VisInstancedStockpileComponent.h"

UVisInstancedStockpileComponent::UVisInstancedStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->CurrentInstancedMesh = NULL;
}


