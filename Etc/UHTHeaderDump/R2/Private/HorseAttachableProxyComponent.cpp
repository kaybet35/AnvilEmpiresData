#include "HorseAttachableProxyComponent.h"

UHorseAttachableProxyComponent::UHorseAttachableProxyComponent() {
    this->AngleTolerance = 15.00f;
    this->DistanceTolerance = 200.00f;
    this->AttachedEntityType = NULL;
    this->DetachedEntityType = NULL;
    this->HorseEntityType = NULL;
}


