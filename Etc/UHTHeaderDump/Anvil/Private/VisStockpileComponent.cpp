#include "VisStockpileComponent.h"

UVisStockpileComponent::UVisStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->CurrentInstancedMesh = NULL;
}


