#include "LifetimeProxyComponent.h"

ULifetimeProxyComponent::ULifetimeProxyComponent() {
    this->LifeSpan = 0.00f;
    this->DropResourceOnDeath = false;
    this->ResetIfObserved = false;
}


