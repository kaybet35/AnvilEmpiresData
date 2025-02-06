#include "LifetimeProxyComponent.h"

ULifetimeProxyComponent::ULifetimeProxyComponent() {
    this->DropResourceOnDeath = false;
    this->ResetIfObserved = false;
    this->LifeSpan = 0.00f;
}


