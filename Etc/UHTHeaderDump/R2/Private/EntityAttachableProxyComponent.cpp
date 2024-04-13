#include "EntityAttachableProxyComponent.h"

UEntityAttachableProxyComponent::UEntityAttachableProxyComponent() {
    this->SlotId = 0;
    this->SlotYaw = 0.00f;
    this->DetachYaw = 0.00f;
    this->AngleTolerance = 15.00f;
    this->DistanceTolerance = 100.00f;
    this->DetachMaxZDelta = 150.00f;
}


