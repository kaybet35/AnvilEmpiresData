#include "GrainMillProxyComponent.h"

UGrainMillProxyComponent::UGrainMillProxyComponent() {
    this->CoarsenessKnobRotationRange = 22.50f;
    this->CoarsenessKnobSmoothSpeed = 10.00f;
    this->CoarsenessKnobPushSpeed = 0.00f;
    this->CoarsenessDriftSpeed = 0.00f;
    this->PlayerCrankPower = 0.25f;
    this->MinActivationPower = 0.10f;
}


