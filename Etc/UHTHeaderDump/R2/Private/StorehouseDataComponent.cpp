#include "StorehouseDataComponent.h"

UStorehouseDataComponent::UStorehouseDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyOwnedInventories = false;
    this->ViewerRentExpireTime = 0;
    this->ViewerCanRelease = false;
}


