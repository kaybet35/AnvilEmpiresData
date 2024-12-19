#include "SimPlayerProxyComponent.h"

USimPlayerProxyComponent::USimPlayerProxyComponent() {
    this->GuardAngleToleranceYaw = 120.00f;
    this->GuardAngleTolerancePitchMin = -60.00f;
    this->GuardAngleTolerancePitchMax = 60.00f;
    this->GuardAngleToleranceYawAlt = 120.00f;
    this->GuardAngleTolerancePitchMinAlt = -60.00f;
    this->GuardAngleTolerancePitchMaxAlt = 60.00f;
    this->GuardMeterRegenCD = 3.00f;
    this->GuardMeterEmptyRegenCD = 6.00f;
    this->GuardMeterRegenSpeed = 10.00f;
    this->GuardMeterDecaySpeed = 20.00f;
    this->StaggerDuration = 3.50f;
    this->StaggerAmount = 0.50f;
    this->StabilityRegenCD = 3.00f;
    this->Radius = 30.00f;
    this->HalfHeight = 60.00f;
    this->CrouchedHalfHeight = 35.00f;
    this->MaxVelocity = 350.00f;
    this->MaxSprintVelocity = 350.00f;
    this->MaxVelocityCeiling = 1200.00f;
    this->MaxFlyVelocity = 500.00f;
    this->MaxSwimVelocity = 200.00f;
    this->BreakDeceleration = 3000.00f;
    this->RotationSpeed = 350.00f;
    this->MovementAcceleration = 5000.00f;
    this->SwimMovementAcceleration = 1000.00f;
    this->SprintStaminaDrain = 15.00f;
    this->SwimStaminaDrain = 1.00f;
    this->ClimbStaminaCost = 20.00f;
    this->RammingVelocityFactor = 0.95f;
    this->RammingStabilityDamage = 0.30f;
    this->AutoPushMaxDistance = 750.00f;
    this->AutoPushMinDistance = 110.00f;
    this->AutoPushConeHalfAngleCosine = 0.71f;
}


