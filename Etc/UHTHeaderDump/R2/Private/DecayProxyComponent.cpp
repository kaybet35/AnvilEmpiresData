#include "DecayProxyComponent.h"

UDecayProxyComponent::UDecayProxyComponent() {
    this->bEnabled = true;
    this->StartDelayHours = 1.00f;
    this->DecayTimeHours = 24.00f;
    this->bForceDecayPreventionFromTown = false;
}


