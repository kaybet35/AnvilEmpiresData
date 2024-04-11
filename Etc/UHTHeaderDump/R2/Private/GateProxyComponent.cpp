#include "GateProxyComponent.h"

UGateProxyComponent::UGateProxyComponent() {
    this->AutoCloseRange = 1000.00f;
    this->AutoCloseTime = 5.00f;
    this->BreachProbCurve = NULL;
}


