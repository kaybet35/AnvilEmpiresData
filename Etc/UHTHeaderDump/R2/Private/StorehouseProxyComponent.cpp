#include "StorehouseProxyComponent.h"

UStorehouseProxyComponent::UStorehouseProxyComponent() {
    this->FamilyOwnedInventories = false;
    this->NumSlotsPerInv = 50;
    this->StackSize = 10000;
    this->RentPrice = 100;
    this->RentDuration = 172800;
    this->ExtendPrice = 50;
    this->ExtendDuration = 86400;
}


