#include "RefineResourceDataComponent.h"

URefineResourceDataComponent::URefineResourceDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInventoryFull = false;
    this->NumItemsInQueue = 0;
    this->ItemProductionTimeLeft = 0.00f;
    this->EstItemProductionTimeLeft = 0.00f;
    this->TotalProductionTimeLeft = 0.00f;
}


