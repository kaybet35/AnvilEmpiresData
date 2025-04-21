#include "StorehouseDataComponent.h"

UStorehouseDataComponent::UStorehouseDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewerRentExpireTime = 0;
    this->ViewerCanRent = false;
    this->ViewerCanRelease = false;
}


