#include "VisSingleItemStockpileComponent.h"

UVisSingleItemStockpileComponent::UVisSingleItemStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->InventorySlotIndex = 0;
    this->DefaultItemMesh = NULL;
}


